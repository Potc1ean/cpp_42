#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat un("Ilia", 1);
    Bureaucrat deux("Ilia bis", 98);
    Form ZouzouLandPass("ZouzouLandPass", 50, 12);
    std::cout << un << std::endl;
    std::cout << deux << std::endl;
    un.signForm(ZouzouLandPass);
    deux.signForm(ZouzouLandPass);
    try {
        ZouzouLandPass.beSigned(un);
        ZouzouLandPass.beSigned(deux);
    }
    catch (std::exception& exc) {
        std::cout << "Exception attrapee : " << exc.what() << std::endl;
    }
    return 0;
}
