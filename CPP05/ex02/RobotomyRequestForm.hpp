#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <cstdlib>
# include "Form.hpp"

class	Bureaucrat;

class RobotomyRequestForm: public Form
{
	private:
		const string	_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm &cpy);

		void	beExecuted(const Bureaucrat &Bureaucrat) const;
};
std::ostream &operator<<(std::ostream &out, const RobotomyRequestForm &Form);

#endif