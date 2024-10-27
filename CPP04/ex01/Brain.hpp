#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
		int			_index;
	
	public:
		Brain();
		Brain(const Brain &src);
		~Brain();

		Brain	&operator=(const Brain &src);

		std::string getIdea() const;
		void	setIdea(const std::string &idea);
		void	printIdeas();
};

#endif