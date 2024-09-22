#include "../includes/Dog.hpp"

Dog::Dog() 
    : Animal("Dog")
{
    std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(std::string type)
    : Animal(type)
{
    std::cout << "Dog " << this->type << " constructor called." << std::endl;
}

Dog::Dog(Dog &other)
    : Animal(other)
{
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
    Animal::operator=(rhs);
    return *this;
}


void Dog::makeSound() const
{
    std::cout << "woof." << std::endl;
}