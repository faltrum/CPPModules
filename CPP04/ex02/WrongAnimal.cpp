# include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("undefined")
{
    std::cout << "WrongAnimal default constructor called. Type: " << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called. Type: " << this->getType() << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : _type(src._type)
{
	std::cout << "WrongAnimal copy constructor called. Type: " << this->getType() << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
	std::cout << "WrongAnimal destructor called. Type: " << this->getType() << std::endl;
}

//operadpr "="
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this != &src)
		this->_type = src._type;
	std::cout << "WrongAnimal copy assigment operator called.Type: " << this->getType() << std::endl;
	return (*this);
}

//Getter
std::string WrongAnimal::getType() const { return (_type); }

//Setter
void WrongAnimal::setType(const std::string &type) { _type = type; }

//Funcion
void	WrongAnimal::makeSound() const { std::cout << "...Silence..." << std::endl; }