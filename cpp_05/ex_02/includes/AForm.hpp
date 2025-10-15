#pragma once

#include <string>
#include <stdexcept>
#include <iostream>

class Bureaucrat;

class AForm {
    private :
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

        static void checkGradeOrThrow(int grade);
    protected:
        virtual void executeAction() const = 0;
    public :
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw() {
                return "Form: grade too high (min = 1)";
            }
        };
        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw() {
                return "Form: grade too low (max = 150)";
            }
        };
        class FormNotSignedException : public std::exception {
        public:
            virtual const char* what() const throw() {
                return "Form: the form is not signed";
            }
        };

        AForm(const std::string& name, int gradeToSign, int gradeToExec);
        virtual ~AForm();

        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& B);

        virtual void execute(const Bureaucrat& executor) const;
};

std::ostream& operator<<(std::ostream &os, const AForm& f);
