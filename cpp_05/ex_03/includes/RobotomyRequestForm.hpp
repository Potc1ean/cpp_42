#pragma once

#include "AForm.hpp"
#include <cstdlib> 
#include <ctime>

class RobotomyRequestForm : public AForm {
    private:
        std::string target;
    public:
        RobotomyRequestForm(const std::string& target);
        virtual ~RobotomyRequestForm();

        void executeAction() const;
};
