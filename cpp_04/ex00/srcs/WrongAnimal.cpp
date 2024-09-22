#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() 
    : type("defaut")
{
    std::cout << "WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
    std::cout << "WrongAnimal " << this->type << " constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
    this->type = other.type;
    std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal default destructor called." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
    this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}


void WrongAnimal::makeSound(void) const
{
    std::cout << "WrongAnimal " << type << " makes sound." << std::endl;
}
