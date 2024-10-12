/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:46:46 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 17:57:13 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

/*
Que es un puntero a una string?
-stringPTR: Pointer to a string
Es una variable que retiene la direccion de memoria en una variable string.

Que es una referencia a una string?
-stringREF: Referencia a una string.

Reference is an alias to the variable.

Pointer holds memory address en una variable y por referencia es un alias.
*/

int	main()
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	
	std::string	&stringREF = str;

	std::cout << "memory address of the string variable: " << &str << std::endl;
	std::cout << "memory address by stringPTR: " << stringPTR << std::endl;
	std::cout << "memory address by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "value of the string variable: " << str << std::endl;
	std::cout << "value pinted to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
	
	return (0);
}
