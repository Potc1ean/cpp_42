#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() 
    : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called." << std::endl;
}

WrongCat::WrongCat(std::string type)
    : WrongAnimal(type)
{
    std::cout << "WrongCat " << this->type << " constructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat &other)
    : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called." << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat default destructor called." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs)
{
    WrongAnimal::operator=(rhs);
    return *this;
}


void WrongCat::makeSound() const
{
    std::cout << "Maou moua.." << std::endl;
}