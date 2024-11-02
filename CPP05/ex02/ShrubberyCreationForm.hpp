#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <cstdlib>
# include "Form.hpp"

class	Bureaucrat;

class ShrubberyCreationForm: public Form
{
	private:
		const string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &cpy);

		void	beExecuted(const Bureaucrat &Bureaucrat) const;
};
std::ostream &operator<<(std::ostream &out, const ShrubberyCreationForm &Form);

#endif