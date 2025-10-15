#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreation", 145, 137), target(target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::executeAction() const {
    std::ofstream ofs((target + "_shrubbery").c_str());
    if (!ofs) {
        std::cerr << "Error: could not open file " << target << "_shrubbery" << std::endl;
        return;
    }
    ofs << "   ^   " << std::endl;
    ofs << "  ^^^  " << std::endl;
    ofs << " ^^^^^ " << std::endl;
    ofs << "  |||  " << std::endl;
    ofs.close();
}
