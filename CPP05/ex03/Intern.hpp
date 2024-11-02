#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern	const	&operator=(const Intern &src);

		Form	*makeForm(std::string const &type, std::string const &target);
};

# endif