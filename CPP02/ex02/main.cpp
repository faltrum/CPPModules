# include "Fixed.hpp"

int	main(void)
{
	Fixed	a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std:: cout << b << std::endl;

	std::cout << Fixed::max(a,b) << std::endl;

	Fixed	c(6);

	//operador "min and max"
	std::cout << "minimus between " << c << " and " << b << " is " << Fixed::min(c, b) << std::endl;
	std::cout << "maximus" << c << " and " << b << " is " << Fixed::max(c, b) << std::endl;

	//operador ">"
	if (b >= c)
		std::cout << b << " is bigger than " << c << std::endl;
	else
		std::cout << c << " is bigger than " << b << std::endl;
	
	//operador "<"
	if (b <= c)
		std::cout << b << " is smaller than " << c << std::endl;
	else
		std::cout << c << " is smaller than " << b << std::endl;
	
	//operador "=="
	if (b == c)
		std::cout << b << " is equal than " << c << std::endl;
	else
		std::cout << b << " is not equal than " << c << std::endl;

	//operador !=
	if (b != c)
		std::cout << b << " is not equal than " << c << std::endl;
	else
		std::cout << b << " is equal than " << c << std::endl;

	//operador " + - * /"
	std::cout << b << " + " << c << " = " << b + c << std::endl;
	std::cout << b << " - " << c << " = " << b - c << std::endl;
	std::cout << b << " * " << c << " = " << b * c << std::endl;
	std::cout << b << " / " << c << " = " << b / c << std::endl;

	return (0);
}