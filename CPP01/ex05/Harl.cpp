# include "Harl.hpp"

Harl::Harl(){};
Harl::~Harl(){};

/*
Esta función se encarga de llamar a la funcion correcta,
dependiendo del nivel. 
.size() devuelve el numero de caracteres de la string 
(en formato size_t) en este caso 1.
El loop for iterará a través del array de 
punteros de funciones y llamara a la funcion correspondiente.
&Harl::debug es la direccion de la funcion debug, lo mismo para le resto.
Queremos la direccion de la funcion para guardarla en un puntero.

this->*f[i] es la sintaxis para llamar un función puntero declarada en el
array f y dependiendo del valor de i.
*/

void	Harl::complain(std::string level)
{
	if (level.size() == 1 && level[0] >= '1' && level[0] <= '4')
	{
		void	(Harl::*f[4])();

		f[0] = &Harl::debug;
		f[1] = &Harl::info;
		f[2] = &Harl::warning;
		f[3] = &Harl::error;

		for (int i = 0; i < 4; i++)
		{
			if (i == level[0] - 49)
				(this->*f[i])();
		}
	}
	else
		std::cout << "Level is not correct (1 to 4)." << std::endl;
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