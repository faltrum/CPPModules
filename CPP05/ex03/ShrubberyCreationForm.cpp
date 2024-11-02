# include <iostream>
# include <fstream>
# include "ShrubberyCreationForm.hpp"

using	std::string;

//Default constructor
ShrubberyCreationForm::ShrubberyCreationForm(): Form::Form("ShrubberyCreationForm", 145, 137), _target("null") {}

//Constructor
ShrubberyCreationForm::ShrubberyCreationForm(const string &target): Form::Form("ShrubberyCreationForm", 145, 137), _target(target) {}

//Copia del constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy): Form::Form(cpy), _target(cpy._target) {}

//Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() {}

//Copy assigment operator"="
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	if (this != &cpy)
		this->_target = cpy._target;
	return(*this);
}

//Funciones

void	ShrubberyCreationForm::beExecuted(const Bureaucrat &Bureaucrat) const
{
	std::ofstream	fout;

	fout.open((this->_target + "_shrubbery").c_str());
	if (fout.fail())
	{
		std::cout << "Could not open output file" << std::endl;
		return (0);
	}
	fout << "       _-_\n    /~~   ~~\\\n /~~         ~~\\\n{               }\n \\  _-     -_  /\n   ~  \\\\ //  ~\n_- -   | | _- _\n  _ -  | |   -_\n      // \\\\";
	fout.close();
	std::cout << Bureaucrat.getName() << " successfully created a shrubbery" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const ShrubberyCreationForm &b)
{
	return (std::cout << b.getName() << " form, signed: " << b.getIsSigned() << ", sign grade: " << b.getGradeToSign() << ", execute grade: " << b.getGradeToExecute());
}