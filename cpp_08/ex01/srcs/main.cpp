#include <Span.hpp>

int main( void )
{
    Span s1(4);
    try {
        s1.addNumber(4);
        s1.addNumber(1);
        s1.addNumber(7);
        s1.addNumber(-11);
    } catch(std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << s1
              <<"shortest span equal " << s1.shortestSpan() 
              << " and longtest span equal " << s1.longestSpan()
              << std::endl;
    
    return 0;
}
