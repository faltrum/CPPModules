#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <cstdlib>
# include "Form.hpp"

class	Bureaucrat;

class PresidentialPardonForm: public Form
{
	private:
		const string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm &cpy);

		void	beExecuted(const Bureaucrat &Bureaucrat) const;
};
std::ostream &operator<<(std::ostream &out, const PresidentialPardonForm &Form);

#endif