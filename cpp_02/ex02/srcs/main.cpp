#include "../includes/Fixed.hpp"

int main()
{
    Fixed a;
	Fixed b( 10 );
	Fixed c( 42.42f );
	Fixed d( b );

	a = Fixed( 1234.4321f );

	std::cout << "-----Comparison-----" << std::endl;
	if (a > b)
		std::cout << a << " is bigger than " << b << std::endl;
	if (b < c)
		std::cout << b << " is smaller than " << c << std::endl;
	if (a >= b)
		std::cout << a << " is bigger or equal " << b << std::endl;
	if (d <= b)
		std::cout << d << " is smaller or equal " << b << std::endl;
	if (d == b)
		std::cout << d << " equal " << b << std::endl;
	if (d != c)
		std::cout << d << " !equal " << c << std::endl;

	std::cout << "-----Arithmetic-----" << std::endl;
	std::cout <<" b + c equal " << b + c << std::endl;
	std::cout <<" b - c equal " << b - c << std::endl;
	std::cout <<" b * c equal " << b * c << std::endl;
	std::cout <<" c / b equal " << c / b << std::endl;
	/*b = c / b; std::cout << b << std::endl;*/

	std::cout << "-----Incrementation-----" << std::endl;
	std::cout <<" b++ equal " << b++ << std::endl;
	std::cout <<" b equal " << b << std::endl;
	std::cout <<" --b equal " << --b << std::endl;

	std::cout << "-----Min/Max-----" << std::endl;
	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;

	return 0;
}
