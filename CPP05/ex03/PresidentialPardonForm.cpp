# include "PresidentialPardonForm.hpp"

//Default constructor
PresidentialPardonForm::PresidentialPardonForm(): Form::Form("PresidentialPardonForm", 25, 5), _target("null") {}

//Constructor
PresidentialPardonForm::PresidentialPardonForm(const std::string &target): Form::Form("PresidentialPardonForm", 25, 5), _target(target) {}

//Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy): Form::Form(cpy), _target(cpy._target) {}

//Destructor
PresidentialPardonForm::~PresidentialPardonForm() {}

//Copy assigment operator "="
PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	if (this != &cpy)
		this->_target = cpy.getTarget();
	return(*this);
}

void	PresidentialPardonForm::beExecuted(const Bureaucrat &Bureaucrat) const
{
	(void)Bureaucrat;
	srand((unsigned) time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully " << std::endl;
	else
		std::cout << this->_target << "'s robotomization failed" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, PresidentialPardonForm const &b)
{
	return (std::cout << b.getName() << " form, signed: " << b.getIsSigned() << ", sign grade: " << b.getGradeToSign() << ", exec grade: " << b.getGradeToExecute());
}