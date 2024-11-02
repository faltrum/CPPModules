# include "RobotomyRequestForm.hpp"

//Default constructor
RobotomyRequestForm::RobotomyRequestForm(): Form::Form("RobotomyRequestForm", 72, 45), _target("null") {}

//Constructor
RobotomyRequestForm::RobotomyRequestForm(const std::string &target): Form::Form("RobotomyRequestForm", 72, 45), _target(target) {}

//Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy): Form::Form(cpy), _target(cpy._target) {}

//Destructor
RobotomyRequestForm::~RobotomyRequestForm() {}

//Copy assigment operator "="
RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	if (this != &cpy)
		this->_target = cpy._target;
	return(*this);
}

void	RobotomyRequestForm::beExecuted(const Bureaucrat &Bureaucrat) const
{
	(void)Bureaucrat;
	srand((unsigned) time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully " << std::endl;
	else
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, RobotomyRequestForm const &b)
{
	return (std::cout << b.getName() << " form, signed: " << b.getIsSigned() << ", sign grade: " << b.getGradeToSign() << ", exec grade: " << b.getGradeToExecute());
}