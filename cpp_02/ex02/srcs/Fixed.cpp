#include "../includes/Fixed.hpp"

Fixed::Fixed() : fpoint(0)
{
}

Fixed::Fixed(const Fixed& other) : fpoint(other.getRawBits())
{
}

Fixed::Fixed(const int i)
{
	this->fpoint = (i << bit);
}

Fixed::Fixed(const float f)
{
	this->fpoint = int(roundf(f * (1 << bit)));
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{

    return fpoint;
}

void Fixed::setRawBits(int const raw)
{
    fpoint = raw;
}

float Fixed::toFloat(void) const
{
	return float(this->fpoint) / (1 << bit);
}

int Fixed::toInt(void) const
{
	return this->fpoint >> bit;
}

std::ostream& operator<<(std::ostream& o, const Fixed& fixed)
{
	o << fixed.toFloat();
	return o;
}

/*comparaisons*/
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignement operateur called" << std::endl;
    if (this != &other) {
        this->fpoint = other.getRawBits();
    }
    return *this;
}

bool Fixed::operator>(const Fixed& other)
{
    if (this->toInt() > other.toInt())
        return true;
    return false;  
}

bool Fixed::operator<(const Fixed& other)
{
    if (this->toInt() < other.toInt())
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& other)
{
    if (this->toInt() < other.toInt())
        return false;
    return true;
}

bool Fixed::operator<=(const Fixed& other)
{
    if (this->toInt() > other.toInt())
        return false;
    return true;
}

bool Fixed::operator==(const Fixed& other)
{
    if (this->toInt() == other.toInt())
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed& other)
{
    if (this->toInt() == other.toInt())
        return false;
    return true;
}


/*arithmetic*/
Fixed Fixed::operator+(const Fixed& other)
{
    Fixed a;
    a.fpoint = this->getRawBits() + other.getRawBits();
    return a;
}


Fixed Fixed::operator-(const Fixed& other)
{
    Fixed a;
    a.fpoint = this->getRawBits() - other.getRawBits();
    return a;
}

Fixed Fixed::operator*(const Fixed& other)
{
    Fixed a(this->toFloat() * other.toFloat());
    return a;
}

Fixed Fixed::operator/(const Fixed& other)
{
    if (other.getRawBits() == 0)
    {
        std::cerr << "division by 0 cant be made -_-" << std::endl;
        exit(1);
    }
    Fixed a(this->toFloat() / other.toFloat());
    return a;
}

/*incrementation*/
Fixed& Fixed::operator++()
{
    this->fpoint++;
    return *this;
}

Fixed& Fixed::operator--()
{
    this->fpoint--;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    ++*this;
    return tmp;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    --*this;
    return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a > b)
		return b;
	return a;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a < b)
		return b;
	return a;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.fpoint > b.fpoint)
		return b;
	return a;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.fpoint < b.fpoint)
		return b;
	return a;
}
