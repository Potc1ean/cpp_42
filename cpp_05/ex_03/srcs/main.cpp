#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main() {
    Intern intern;
    Bureaucrat boss("Boss", 1);

    AForm* shrub = intern.makeForm("shrubbery creation", "home");
    AForm* robo = intern.makeForm("robotomy request", "robo");
    AForm* pardon = intern.makeForm("presidential pardon", "Le Chat");

    AForm* fake = intern.makeForm("ReviveMeJett form", "Me");

    if (shrub) {
        boss.signForm(*shrub);
        boss.executeForm(*shrub);
        delete shrub;
    }
    if (robo) {
        boss.signForm(*robo);
        boss.executeForm(*robo);
        delete robo;
    }
    if (pardon) {
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
        delete pardon;
    }
    if (fake) delete fake;
    return 0;
}
