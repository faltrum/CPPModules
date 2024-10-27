# include "Cat.hpp"

Cat::Cat(): AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called." << std::endl;
}

Cat::Cat(const Cat &src) : AAnimal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat::~Cat() { delete this->_brain; std::cout << "Cat destructor called." << std::endl; }

Cat &Cat::operator=(const Cat &src)
{
	if (this != &src)
	{
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
		this->_type = src.getType();
	}
	std::cout << "Cat copy assigment operator called" << std::endl;
	return (*this);
}

//getters
Brain *Cat::getBrain() const { return (_brain); }

//setters
void	Cat::setBrain(Brain *brain)
{
	if (this->_brain != brain)
	{
		delete this->_brain;
		this->_brain = brain;
	}
}

//Funcion
void	Cat::makeSound() const { std::cout << "meow meow" << std::endl; }