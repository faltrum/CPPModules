#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

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
		Form(const Form &src);
		~Form();

		Form &operator=(const Form &src);

		string			getName() const;
		bool			getIsSigned() const;
		unsigned int	getGradeToSign() const;
		unsigned int	getGradeToExecute() const;

		void			setIsSigned(const bool beSigned);
		void			setGradeToSign(const unsigned int &gradeToSign);
		void			setGradeToExecute(const unsigned int &gradeToExecute);
		void			beSigned(Bureaucrat &Bureaucrat);

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

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif