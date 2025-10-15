#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat un("Ilia", 1);
    Bureaucrat deux("Ilia bis", 150);
    std::cout << un << std::endl;
    std::cout << deux << std::endl;
    try {
        deux.decrementGrade();
        deux.incrementGrade();
        std::cout << deux << std::endl;
    }
    catch (std::exception& exc) {
        std::cout << "Exception attrapee : " << exc.what() << std::endl;
    }
    return 0;
}
