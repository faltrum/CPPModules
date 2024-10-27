# include "Animal.hpp"

Animal::Animal() : _type("undefined")
{
    std::cout << "Animal default constructor called. Type: " << this->getType() << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
    std::cout << "Animal constructor called. Type: " << this->getType() << std::endl;
}

Animal::Animal(const Animal &src) : _type(src._type)
{
    std::cout << "Animal copy constructor caller. Type: " << this->getType() << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called. Type: " << this->getType() << std::endl;
}

// operador "="
Animal &Animal::operator=(const Animal &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "Animal copy assigment operator called. Type: " << this->getType() << std::endl;
	return (*this);
}

//getter
std::string Animal::getType() const { return (_type); }

//getter
void	Animal::setType(const std::string &type) { _type = type; }

//Funciones
void	Animal::makeSound() const { std::cout << "...Silence..." << std::endl; }