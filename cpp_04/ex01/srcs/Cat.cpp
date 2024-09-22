#include "../includes/Cat.hpp"

Cat::Cat() 
    : Animal("cat"), brain(new Brain())
{
    std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(std::string type)
    : Animal(type), brain(new Brain())
{
    std::cout << "Cat " << this->type << " constructor called." << std::endl;
}

Cat::Cat(Cat &other)
    : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat default destructor called." << std::endl;
}

Cat& Cat::operator=(const Cat &rhs)
{
    this->type = rhs.type;
    this->brain = new Brain(*rhs.brain);
    return *this;
}


void Cat::makeSound() const
{
    std::cout << "Maou moua.." << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->brain;
}