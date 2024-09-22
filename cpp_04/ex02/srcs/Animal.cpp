#include "../includes/Animal.hpp"

Animal::Animal() 
    : type("default")
{
    std::cout << "Animal default constructor called." << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
    std::cout << "Animal " << this->type << " constructor called." << std::endl;
}

Animal::Animal(Animal &other)
{
    this->type = other.type;
    std::cout << "Animal copy constructor called." << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal default destructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &other)
{
    this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}


void Animal::makeSound(void) const
{
    std::cout << "Animal makes "<< type << "'s sound." << std::endl;
}
