#include "../includes/Fixed.hpp"

Fixed::Fixed() : fpoint(0)
{
    std::cout << "default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) : fpoint(other.getRawBits())
{
    std::cout << "Copy constructor called"  << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called"  << std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignement operateur called" << std::endl;
    if (this != &other) {
            this->fpoint = other.getRawBits();
        }
        return *this;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getrawBits called" << std::endl;
    return fpoint;
}

void Fixed::getRawBits(int const raw)
{
    std::cout << "getrawBits called" << std::endl;
    fpoint = raw;
}