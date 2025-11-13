#include "PmergeMe.hpp"

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

// --- tools ---

bool PmergeMe::isValidNumber(const std::string &s) const
{
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.length(); ++i)
        if (!std::isdigit(s[i]))
            return false;
    return true;
}

template<typename Container>
void PmergeMe::printSequence(const std::string &label, const Container &seq) const
{
    std::cout << label;
    for (typename Container::const_iterator it = seq.begin(); it != seq.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

// --- Ford-Johnson algorithm ---

std::vector<size_t> PmergeMe::jacobsthalSequence(size_t n)
{
    std::vector<size_t> seq;
    seq.push_back(1);
    size_t a = 1, b = 1;
    while (b < n)
    {
        size_t next = b + 2 * a;
        seq.push_back(next);
        a = b;
        b = next;
    }
    return seq;
}

template <typename Container, typename T>
void PmergeMe::insertOne(Container &mainChain, const T &value)
{
    typename Container::iterator pos =
        std::lower_bound(mainChain.begin(), mainChain.end(), value);
    mainChain.insert(pos, value);
}

template <typename Container>
void PmergeMe::insertUsingJacobsthal(Container &mainChain, const Container &smalls)
{
    std::vector<size_t> jac = jacobsthalSequence(smalls.size());
    std::vector<bool> inserted(smalls.size(), false);

    for (size_t j = 0; j < jac.size() && jac[j] <= smalls.size(); ++j)
    {
        size_t idx = jac[j] - 1;
        if (inserted[idx])
            continue;
        insertOne(mainChain, smalls[idx]);
        inserted[idx] = true;
    }

    for (size_t i = 0; i < smalls.size(); ++i)
    {
        if (!inserted[i])
            insertOne(mainChain, smalls[i]);
    }
}

template <typename Container>
void PmergeMe::fordJohnsonSort(Container &seq)
{
    if (seq.size() <= 1)
        return;

    typedef typename Container::value_type T;
    std::vector<std::pair<T, T> > pairs;
    typename Container::iterator it = seq.begin();

    while (it != seq.end())
    {
        T first = *it++;
        if (it != seq.end())
        {
            T second = *it++;
            if (first > second)
                std::swap(first, second);
            pairs.push_back(std::make_pair(first, second));
        }
        else
        {
            pairs.push_back(std::make_pair(first, first));
        }
    }

    Container mainChain;
    for (size_t i = 0; i < pairs.size(); ++i)
        mainChain.push_back(pairs[i].second);

    fordJohnsonSort(mainChain);

    Container smalls;
    for (size_t i = 0; i < pairs.size(); ++i)
        smalls.push_back(pairs[i].first);

    insertUsingJacobsthal(mainChain, smalls);

    seq = mainChain;
}


// --- Public ---

bool PmergeMe::parseArgs(int argc, char **argv)
{
    if (argc < 2)
        return false;
    for (int i = 1; i < argc; ++i)
    {
        if (!isValidNumber(argv[i]))
            return false;
        int val = std::atoi(argv[i]);
        if (val <= 0)
            return false;
        vec.push_back(val);
        deq.push_back(val);
    }
    return true;
}

void PmergeMe::sortAndDisplay()
{
    printSequence("Before: ", vec);

    clock_t start = std::clock();
    fordJohnsonSort(vec);
    clock_t end = std::clock();
    double duration_ms = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    printSequence("After: ", vec);
    std::cout << "Time to process a range of " << vec.size()
              << " elements with std::vector : "
              << duration_ms << " ms" << std::endl;

    start = std::clock();
    fordJohnsonSort(deq);
    end = std::clock();
    duration_ms = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << deq.size()
              << " elements with std::deque : "
              << duration_ms << " ms" << std::endl;
}
