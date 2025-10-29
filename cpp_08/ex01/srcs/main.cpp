#include "Span.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>
#include <list>

int main( void )
{
    std::srand(std::time(NULL));

    std::vector<int> v;
    v.reserve(10000);

    for (int i = 0; i < 10000; ++i) {
        int randomNumber = std::rand() % 100000;
        v.push_back(randomNumber);
    }

    std::list<int> l;

    for (int i = 0; i < 20; ++i) {
        int randomNumber = std::rand() % 1000;
        l.push_back(randomNumber);
    }

    Span s1(20);
    Span s2(9876);

    try {
        std::list<int>::const_iterator b = l.begin();
        std::list<int>::const_iterator e = l.end();
        s1.fillSpan(b, e);
        s2.fillSpan(v.begin(), v.end());
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << s1
              <<"shortest span equal " << s1.shortestSpan() 
              << " and longtest span equal " << s1.longestSpan()
              << std::endl;

    std::cout << "shortest span equal " << s2.shortestSpan() 
              << " and longtest span equal " << s2.longestSpan()
              << std::endl;
    
    return 0;
}
