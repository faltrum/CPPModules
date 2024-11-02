#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

using	std::string;
class	Bureaucrat;

class 	Form
{
	private:
		const string		_name;
		bool				_isSign;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;

	public:
		Form();
		Form(const string &name, const unsigned int _signGrade, const unsigned int _execGrade);
		Form(std::string const &type, std::string const &target);
		Form(const Form &cpy);
		virtual ~Form();

//Basic Operators
		Form &operator=(const Form &cpy);

//GEtters and Setters
		string			getName() const;
		bool			getIsSigned() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExecute() const;
		virtual std::string const	&getTarget(void) const = 0;


//Main Member Functions
		void			setIsSigned(const bool beSigned);
		void			setGradeToSign(const unsigned int &gradeToSign);
		void			setGradeToExecute(const unsigned int &gradeToExecute);
		void			beSigned(Bureaucrat &Bureaucrat);
		static Form		*makeForm(std::string const &type, std::string const &target);

//Exceptions
		class GradeTooHighException : public std::out_of_range
		{
			public:
				GradeTooHighException(string error_msg);
		};
		class GradeTooLowException : public std::out_of_range
		{
			public:
				GradeTooLowException(string error_msg);
		};
		class FormIsSignedException : public std::runtime_error
		{
			public:
				FormIsSignedException(string error_msg);
		};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif