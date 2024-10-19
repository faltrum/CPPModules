# include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

/*
Esta función se encarga de llamar a la funcion correcta,
dependiendo del nivel utilizando switch.
This->Harl::debug() es la sintaxis para llamar a la funcion.
El for loop itera por el array de punteros de funciones y llama a la
correcta.
*/

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	for (i = 0; i < 4; i++)
	{
		if (!levels[i].compare(level))
			break ;
	}
	switch (i)
	{
		case 0:
			this->Harl::debug();
		case 1:
			this->Harl::info();
		case 2:
			this->Harl::warning();
		case 3:
			this->Harl::error();
			break ;
		default:
			std::cout << "Level is not correct (DEBUG, INFO, WARNING or EXTRA):" << std::endl;
	}
}

//Las funciones debug, warning, info y error...imprimen sus mensajes.

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle";
    std::cout << "-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working";
	std::cout << " here since last month." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now." << std::endl;
}