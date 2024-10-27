# include "AAnimal.hpp"

AAnimal::AAnimal() : _type("undefined")
{
    std::cout << "AAnimal default constructor called. Type: " << this->getType() << std::endl;
}

AAnimal::AAnimal(const std::string &type) : _type(type)
{
    std::cout << "AAnimal constructor called. Type: " << this->getType() << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) : _type(src._type)
{
    std::cout << "AAnimal copy constructor caller. Type: " << this->getType() << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called. Type: " << this->getType() << std::endl;
}

// operador "="
AAnimal &AAnimal::operator=(const AAnimal &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "AAnimal copy assigment operator called. Type: " << this->getType() << std::endl;
	return (*this);
}

//getter
std::string AAnimal::getType() const { return (_type); }

//getter
void	AAnimal::setType(const std::string &type) { _type = type; }

//Funciones
void	AAnimal::makeSound() const { std::cout << "...Silence..." << std::endl; }