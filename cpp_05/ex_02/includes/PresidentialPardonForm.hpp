#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string target;
    public:
        PresidentialPardonForm(const std::string& target);
        virtual ~PresidentialPardonForm();

        void executeAction() const;
};
