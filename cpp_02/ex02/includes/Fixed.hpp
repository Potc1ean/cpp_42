#ifndef __FIXED__
# define __FIXED__

# include <iostream>
# include <string> 
# include <cmath>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed& other);
    Fixed(const int i);
    Fixed(const float f);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt(void) const;

    /*comparisons*/
    Fixed& operator=(const Fixed& other);
    bool operator>(const Fixed& other);
    bool operator<(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);

    /*arithmetic*/
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);

    /*incrementation*/
    Fixed& operator++();
    Fixed& operator--();
    Fixed operator++(int);
    Fixed operator--(int);

    static			Fixed& min(Fixed& a, Fixed& b);
	static const	Fixed& min(const Fixed& a, const Fixed& b);
	static			Fixed& max(Fixed& a, Fixed& b);
	static const	Fixed& max(const Fixed& a, const Fixed& b);
    
private:
    int fpoint;
    int const static bit = 8;
};

std::ostream& operator <<(std::ostream& o, const Fixed& fixed);

# endif