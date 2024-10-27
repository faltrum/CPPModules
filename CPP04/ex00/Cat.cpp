# include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat() { std::cout << "Cat destructor called." << std::endl; }

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "Cat copy assigment operator called" << std::endl;
	return (*this);
}

//Funcion
void	Cat::makeSound() const { std::cout << "meow meow" << std::endl; }