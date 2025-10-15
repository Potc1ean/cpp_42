#pragma once

#include <string>
#include <stdexcept>
#include <iostream>

class Bureaucrat;

class Form {
    private :
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExec;

        static void checkGradeOrThrow(int grade);
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

        Form(const std::string& name, int gradeToSign, int gradeToExec);
        
        const std::string& getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExec() const;

        void beSigned(const Bureaucrat& B);
};

std::ostream& operator<<(std::ostream &os, Form& f);
