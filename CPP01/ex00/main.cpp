/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:02:06 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 16:15:17 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Este es la funcion que inicializara el programa
Creara un zombien en el Stack y en el Heap.
Despues mostrara el Zombie en el Stack y en el HEAP.
*/

int	main()
{
	Zombie	*zom;

	Zombie	zombie_class = Zombie("Zombie");
	zombie_class.announce();

	std::cout << "Zombie allocated on the heap " << std::endl;
	zom = newZombie("Heap");

	std::cout << "Zombie allocated on the Stack " << std::endl;
	randomChump("Stack:");

	zom->announce();

	delete zom;
	return (0);
}
