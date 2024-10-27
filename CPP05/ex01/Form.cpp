# include "Form.hpp"

using std::string;

//Default constructor
Form::Form() : _name("uname"), _isSign(false), _signGrade(MAX_GRADE), _execGrade(MAX_GRADE) {}

//Constructor

Form::Form(const string &name, const unsigned int gradeToSign, const unsigned int gradeToExecute)
		: _name(name), _isSign(false), _signGrade(gradeToSign), _execGrade(gradeToExecute)
{
	if (gradeToSign < MIN_GRADE || gradeToExecute < MIN_GRADE)
		throw Form::GradeTooHighException("Form cannot be constructed.");
	else if (gradeToSign > MAX_GRADE || gradeToExecute > MAX_GRADE)
		throw Form::GradeTooLowException("Form cannot be cosntructed.");
}

//Copy constructor
Form::Form(const Form &src) : _name(src._name), _isSign(src._isSign),
		_signGrade(src._signGrade), _execGrade(src._execGrade) {}

//Destructor
Form::~Form() {}

// Copy assigment operator "="
Form &Form::operator=(const Form &src)
{
	if (this != &src)
		this->_isSign = src.getIsSigned();
	return( *this);
}

//Getters
string	Form::getName() const { return (_name); }

bool	Form::getIsSigned() const { return (_isSign); }

unsigned int	Form::getGradeToSign() const { return (_signGrade); }

unsigned int 	Form::getGradeToExecute() const { return (_execGrade); }

//Setters
void	Form::setIsSigned(const bool isSigned) { this->_isSign = isSigned; }

//Remove functions
void	setGradeToSign(const unsigned int &gradeToSign);
void	setGradeToExecute(const unsigned int &setGradeToExecute);

//Funciones
void	Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException("Form can not be signed.");
	if (this->_isSign)
		throw Form::FormIsSignedException("Form is already signed.");
	else {
		this->_isSign = true;
		std::cout << GREEN << bureaucrat.getName() << " has signed " << this->_name << RESET << std::endl;
	}
}

// Exceptions
Form::GradeTooHighException::GradeTooHighException(string error_msg) : std::out_of_range(error_msg + "Range too high.") {};

Form::GradeTooLowException::GradeTooLowException(string error_msg) : std::out_of_range(error_msg + "Range too low.") {};

Form::FormIsSignedException::FormIsSignedException(string error_msg) : std::runtime_error(error_msg + "Form is already signed") {};

// Operator "<<"
std::ostream &operator<<(std::ostream &out, const Form &form) {
	out << YELLOW << "[" << form.getName() << "] Grade to sign: " << form.getGradeToSign() \
		<< " | Grade to execute: " << form.getGradeToExecute();
	if (form.getIsSigned())
		out << " | Form is signed." << RESET << std::endl;
	else
		out << " | Form is NOT signed." << RESET << std::endl;
	return (out);
}