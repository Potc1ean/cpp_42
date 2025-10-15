#pragma once

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    private:
        std::string target;
    public:
        ShrubberyCreationForm(const std::string& target);
        virtual ~ShrubberyCreationForm();

        void executeAction() const;
};
