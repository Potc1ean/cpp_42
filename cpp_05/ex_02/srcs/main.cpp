#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    std::srand(std::time(NULL));

    Bureaucrat boss("Boss", 1);
    Bureaucrat intern("Intern", 150);

    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robo("poutpout");
    PresidentialPardonForm pardon("Le Chat");

    boss.signForm(shrub);
    boss.signForm(robo);
    intern.signForm(pardon);
    boss.signForm(pardon);

    boss.executeForm(shrub);
    boss.executeForm(robo);
    try {
        intern.executeForm(pardon);
    }
    catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    boss.executeForm(pardon);
    return 0;
}
