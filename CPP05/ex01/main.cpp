# include "Bureaucrat.hpp"

//Test: Create Bureaucrat with correct grade
void	constructorCorrectGrade()
{
    std::cout << "---- Test correct grade ----" << RESET << std::endl;
    try
    {
        Bureaucrat("Marco", 120); //Valid grade
    }
    catch (std::exception & e)
    {
        std::cout << "\tcatch: " << e.what() << std::endl;
    }
}

//Test: Create Bureaucrat with too high grade
void	constructorTooHighGrade()
{
	std::cout << std::endl << CYAN << "---- Test too high grade ----" << RESET << std::endl;
	try
	{
		Bureaucrat("Marco", 0); //Invalid Target: Trigger Gradetoohighexception
	}
	catch (std::exception & e) //Catch and display exception
	{
		std::cout << "\tcatch: " << e.what() << std::endl;
	}	
}

//Test: Create Bureaucrat with too low grade
void	constructorTooLowGrade()
{
	std::cout << std::endl << CYAN << "---- Test too low grade ----" << RESET << std::endl;
	try
	{
		Bureaucrat("Marco", 987); //Invalid Target: Trigger Gradetoolowexception
	}
	catch (std::exception & e) //Catch and display exception
	{
		std::cout << "\tcatch: " << e.what() << std::endl;
	}	
}

//Test: Increment grade
void	testIncrementGrade()
{
	std::cout << std::endl << std::endl << CYAN "---- Test increment grade ----" << RESET << std::endl << std::endl;
	try
	{
		Bureaucrat Marco = Bureaucrat("Marco", 120); //Start with valid grade
		std::cout << Marco << std::endl;
		std::cout << MAGENTA << "Try to increment 119." << RESET << std::endl;
		Marco.incrementGrade(119); //Increment by 119, expected grade 1
		std::cout << Marco << std::endl << std::endl;
		std::cout << MAGENTA << "Try to increment 1." << RESET << std::endl;
		Marco.incrementGrade(); //Increment mas a lla de 1, se deberia ver una excpetion
		std::cout << Marco << std::endl << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

// Test: Decrementing grade
void	testDecrementGrade() {
	std::cout << std::endl << std::endl << CYAN << "----- Test decrement grade ----- " << RESET << std::endl << std::endl;
	try {
		Bureaucrat Marco = Bureaucrat("Marco", 120); // Start with valid grade
		std::cout << Marco << std::endl;
		std::cout << MAGENTA << "Try to decrement 30." << RESET << std::endl;
		Marco.decrementGrade(30); // Decrement by 30, expected grade 150
		std::cout << Marco << std::endl << std::endl;
		std::cout << MAGENTA << "Try to decrement 1." << RESET << std::endl;
		Marco.decrementGrade(); // Decrement further by 1, should throw GradeTooLowException
		std::cout << Marco << std::endl << std::endl;
	}
	catch (std::exception & e) { // Catch and display the exception
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

//Test canonical form
void	testCanonicalForm()
{
	std::cout << std::endl << std::endl << CYAN << " ---- Test canonical form ---" << RESET << std::endl << std::endl;
	try
	{
		Bureaucrat Marco = Bureaucrat("Marco", 120); //Crar Bureaucrat MArco
		Bureaucrat Pepe = Bureaucrat("Pepe", 113); //Crear Bureaucrat Pepe
		Pepe = Marco; // Assignar Marco a Pepe (assigment operator)
		std::cout << Pepe << std::endl << std::endl; // deberia imprimir la info de Marco
		std::cout << Marco << std::endl << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << "\tcatch: " << e.what() << std::endl;
	}
}

//Funciones principales para correr el test
int	main()
{
	constructorCorrectGrade();
	constructorTooHighGrade();
	constructorTooLowGrade();

	testIncrementGrade();
	testDecrementGrade();

	testCanonicalForm();

	return (0);
}