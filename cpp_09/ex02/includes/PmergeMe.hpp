#pragma once

#include <vector>
#include <deque>
#include <string>

class PmergeMe
{
    private:
    // --- attributs ---
        std::vector<int> vec;
        std::deque<int> deq;
        template <typename Container>
        void measureSortTime(Container &c, const std::string &name);

    // --- tools ---
        std::vector<size_t> jacobsthalSequence(size_t n);
        bool isValidNumber(const std::string &s) const;
        template<typename Container>
        void printSequence(const std::string &label, const Container &seq) const;

    // --- Ford-Johnson algorithm ---
        template <typename Container, typename T>
        void insertOne(Container &mainChain, const T &value);
        template <typename Container>
        void insertUsingJacobsthal(Container &mainChain, const Container &smalls);
        template <typename Container>
        void fordJohnsonSort(Container &seq);

    public:
        PmergeMe() {}

        bool parseArgs(int argc, char **argv);
        void sortAndDisplay();
};
