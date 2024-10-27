# include "Dog.hpp"

Dog::Dog() : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called." << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog::~Dog() { delete this->_brain; std::cout << "Dog destructor called." << std::endl; }

Dog &Dog::operator=(const Dog &src)
{
	if (this != &src)
	{
		delete this->_brain;
		this->_brain = new Brain(*src._brain);
		this->_type = src.getType();
	}
	std::cout << "Dog copy assigment operator called." << std::endl;
	return (*this);
}

//getters
Brain	*Dog::getBrain() const { return (_brain); }

//setters
void	Dog::setBrain(Brain *brain)
{
	if (this->_brain != brain)
	{
		delete this->_brain;
		this->_brain = brain;
	}
}

//Fucniones
void	Dog::makeSound() const { std::cout << "Wouff Wouff" << std::endl; }