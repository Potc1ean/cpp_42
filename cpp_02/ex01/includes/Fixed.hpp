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

    Fixed& operator=(const Fixed& other);
    int getRawBits(void) const;
    void getRawBits(int const raw);
    float toFloat( void ) const;
    int toInt(void) const;


private:
    int fpoint;
    int const static bit = 8;
};

std::ostream& operator <<(std::ostream& o, const Fixed& fixed);

# endif