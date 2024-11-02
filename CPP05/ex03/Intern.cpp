# include "Intern.hpp"

//Default constructor
Intern::Intern() {}

//Copy constructor
Intern::Intern(const Intern &src)
{
    *this = src;
}

//Destructor
Intern::~Intern() {}

//Copy assigment operator
Intern const    &Intern::operator=(const std::string &type, const std::string &target)
{
    Form    *form;

	form = Form::makeForm(type, target);
	if (!form)
		throw (Form::InvalidFormException());
	else
		std::cout << "Intern creates form: " << form->getName() << " with target " << form->getTarget()  << std::endl;
	return (form);
}