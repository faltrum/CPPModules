/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:02:07 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 13:14:37 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/*
Este es el main que va a correr el programa.
Mostrara las opciones y llamara a als funciones
para ADD, SEARCH a contact o EXIt del programa.
*/

int	main(void)
{
	std::string	input;
	PhoneBook	obj;

	//Printear el menu de opciones
	std::cout << "Enter one of these options:" << std::endl;
	std::cout << "\tADD (save a new contact)" << std::endl;
	std::cout << "\tSEARCH (display specific contact)" << std::endl;
	std::cout << "\tEXIT (exit the program and lost the contacts forever and ever)" << std::endl;
	
	//bucle infinito
	while (1)
	{
		std::cout << ">>";
		if(!std::getline(std::cin, input))
			return (1);
		if (input == "ADD")
			obj.addContact();
		else if (input == "SEARCH")
			obj.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "Exiting...and removing contacts" << std::endl;
			break;
		}
		else
			std::cout << "Incorrect option. Type again" << std::endl;
	}
	std::cout << "See you later alligator" << std::endl;
	return (0);
}