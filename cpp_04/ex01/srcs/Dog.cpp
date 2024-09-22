#include "../includes/Dog.hpp"

Dog::Dog() 
    : Animal("Dog"), brain(new Brain())
{
    std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(std::string type)
    : Animal(type), brain(new Brain())
{
    std::cout << "Dog " << this->type << " constructor called." << std::endl;
}

Dog::Dog(Dog &other)
    : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog default destructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &rhs)
{
    this->type = rhs.type;
    this->brain = new Brain(*rhs.brain);
    return *this;
}


void Dog::makeSound() const
{
    std::cout << "woof." << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->brain;
}