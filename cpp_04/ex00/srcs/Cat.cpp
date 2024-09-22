#include "../includes/Cat.hpp"

Cat::Cat() 
    : Animal("cat")
{
    std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(std::string type)
    : Animal(type)
{
    std::cout << "Cat " << this->type << " constructor called." << std::endl;
}

Cat::Cat(Cat &other)
    : Animal(other)
{
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
    Animal::operator=(rhs);
    return *this;
}


void Cat::makeSound() const
{
    std::cout << "Maou moua.." << std::endl;
}