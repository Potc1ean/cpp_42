#ifndef __FIXED__
# define __FIXED__

# include <iostream>
# include <string> 

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed& other);
    ~Fixed();
    Fixed& operator=(const Fixed& other);
    int getRawBits(void) const;
    void getRawBits(int const raw);
private:
    int fpoint;
    int const static bit = 8;
};



# endif