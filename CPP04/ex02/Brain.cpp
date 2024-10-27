# include "Brain.hpp"

Brain::Brain() : _index(-1)
{
	std::cout << "Brain default constructor called." << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain caopy constructor called." << std::endl;
}

Brain::~Brain() { std::cout <<"Brain Destructor called." <<std::endl; }

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		this->_index = src._index;
		for (int i = 0; i <= this->_index; i++)
			this->_ideas[i] = src._ideas[i];
	}
	std::cout << "Brain copy assigment operator called." << std::endl;
	return (*this);
}

//getter
std::string Brain::getIdea() const
{
	if (this->_index < 0 || this->_index >= 100)
	{
		std::cout << "Invalid Index. There are no ideas in brain." << std::endl;
		return ("");
	}
	return (this->_ideas[this->_index]);
}

//Setter

void	Brain::setIdea(const std::string &idea)
{
	if (this->_index >= 99)
	{
		std::cout << "You can not add more ideas." << std::endl;
		return ;
	}
	this->_ideas[++this->_index] = idea;
}

void	Brain::printIdeas()
{
	if (this->_index < 0)
	{
		std::cout << "There are no ideas in brain." << std::endl;
		return ;
	}
	for (int i = 0; i <= this->_index; i++)
		std::cout << "Idea" << i + 1 << ": " << this->_ideas[i] << std::endl;
}
