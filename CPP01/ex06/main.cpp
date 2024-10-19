# include "Harl.hpp"

/*
Funcion main de entrada al programa:
- Crea la instancia de la clase Harl
- Si el numero de argumentos es correcto, llama a la funcion complain.
- Si no, printea un mensaje de error
*/

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "Enter a correct order: DEBUG, INFO, WARNING or ERROR" << std::endl;
	return (0);
}
