# include "Bureaucrat.hpp"

//Default cosntructor
Bureaucrat::Bureaucrat() : _name("uname"), _grade(MAX_GRADE) {}

//Constructor
Bureaucrat::Bureaucrat(const std::string &name, const unsigned int grade) : _name(name)
{
    if (grade < MIN_GRADE)
        throw Bureaucrat::GradeToolHighException(); //Grade Too High
    else if (grade > MAX_GRADE)
        throw Bureaucrat::GradeToolLowException(); // Grade too low
    else
        this->_grade = grade;
}

//Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &cpy) { *this = cpy; }

//Desctructor
Bureaucrat::~Bureaucrat() {}

//Copy assigment operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &cpy)
{
    if (this != &cpy)
        this->_grade = cpy.getGrade(); //Copy grade, name is constant.
    return (*this);
}

//Getters
std::string Bureaucrat::getName() const { return (_name); }

unsigned int Bureaucrat::getGrade() const { return (_grade); }

// Functions
// Increment grade by 1

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < MIN_GRADE)
		throw Bureaucrat::GradeToolHighException();
	else
		this->_grade--;
}

// Increment grade by custom value
void	Bureaucrat::incrementGrade(unsigned int increment)
{
	if (this->_grade < MIN_GRADE + increment)
		throw Bureaucrat::GradeToolHighException();
	else
		this->_grade -= increment;
}

//Decrement grade by 1
void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > MAX_GRADE)
		throw Bureaucrat::GradeToolLowException();
	else
		this->_grade++;
}

//Decrement grade by custom value
void	Bureaucrat::decrementGrade(unsigned int decrement)
{
	if (this->_grade + decrement > MAX_GRADE)
		throw Bureaucrat::GradeToolLowException();
	else
		this->_grade += decrement;
}

//Exception messages
const char 	*Bureaucrat::GradeToolHighException::what() const throw () { return ("Range too high"); }
const char	*Bureaucrat::GradeToolLowException::what() const throw () { return ("Range too low"); }

//Overload Operator "<<" to display Bureaucrat info
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}