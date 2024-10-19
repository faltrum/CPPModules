# include "Fixed.hpp"

//Constructor con inicializaciones

Fixed::Fixed()
{
    std::cout << "Default cosntructor called" << std::endl;
    this->num = 8;
}

//Copia del constructor con output e inicilizando objeto con otro objeto

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" <<std::endl;
    *this = src;
}

/*
	Why a copy assignment operator?
	In C++, the copy assignment operator is used to copy the data from one object to another.
	When we assign one object to another, the copy assignment operator is called.

	To allow the copy assignment operator to work, we need to overload the assignment operator.
	We can do this by defining a member function with the name operator= and the following syntax:
	- ReturnType operator=(const ClassName &rhs);

	The copy assignment operator. Used when an object is assigned the value of
	another object.
	- Print a message.
	- Check if the object is not the same as the one being assigned. (this != &raw)
	- Sets the num member to the value of raw's (the object) num.
	- Returns a reference to the object.
*/

Fixed &Fixed::operator=(Fixed const &raw)
{
    std::cout << "Copy assigment operator called" << std::endl;
    if (this != &raw)
        this->num = raw.getRawBits();
    return (*this);
}

//setter function.

void	Fixed::setRawBits(int const raw) { this->num = raw; }

//Getter function

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
}
