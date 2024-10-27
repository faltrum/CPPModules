# include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog() { std::cout << "Dog destructor called." << std::endl; }

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "Dog copy assigment operator called." << std::endl;
	return (*this);
}

//Fucniones
void	Dog::makeSound() const { std::cout << "Wouff Wouff" << std::endl; }