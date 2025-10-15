#pragma once

#include <string>
#include <iostream>
#include <stdexcept>

class Form;

class Bureaucrat{
    private :
        const std::string name;
        int grade;

        static void checkGradeOrThrow(int grade);
    public :
        class GradeTooHighException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return "Bureaucrat: grade too high (min = 1)";
                }
        };
        class GradeTooLowException : public std::exception {
            public : 
                virtual const char* what() const throw() {
                    return "Bureaucrat: grade too low (max = 150)";
                }
        };

        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat &other);
        ~Bureaucrat();

        void incrementGrade();
        void decrementGrade();

        int getGrade() const;
        std::string getName() const;

        void signForm(Form &form);
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &b);
