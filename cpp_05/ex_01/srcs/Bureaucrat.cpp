#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    checkGradeOrThrow(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat &other) : name(other.name), grade(other.grade) {
    
}

Bureaucrat::~Bureaucrat() {}

void Bureaucrat::checkGradeOrThrow(int grade) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

void Bureaucrat::incrementGrade() {
    checkGradeOrThrow(grade - 1);
    grade--;
}

void Bureaucrat::decrementGrade() {
    checkGradeOrThrow(grade + 1);
    grade++;
}

int Bureaucrat::getGrade() const {
    return grade;
}

std::string Bureaucrat::getName() const {
    return name;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    return os << b.getName() << ", bureaucrat grade " << b.getGrade();
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception& e) {
        std::cout << name << " couldn't sign " << form.getName() 
            << " because " << e.what() << std::endl;
    }
}
