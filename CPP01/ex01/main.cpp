/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:37:55 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 16:45:23 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Esta funcion inicializa el programa el cual creara una horda
de zombies en el Heap. Devolvera el primer Zombie de la misma.

En este programa se usa el Heap para almacenar la horda.
Hay  un puntero como variable para almacenar la direccion de otra
variable.
Se crea un loop que creara un Zombie por cada elemento del array.
Se usa el puntero para acceder a los elementos del array.
Se usa la keyword NEW para alojar el array de Zombies en el Heap.
Se usa DELETE para borrar los Zombies del HEap.
DELETE hace:
    - borrar el array de objetos del HEAP.
    - Llama al destructor de cada objeto creado.
    + Libera la memoria.
*/

int	main()
{
	Zombie	*zombiePtr;

	int N = 15;
	zombiePtr = zombieHorde(N, "Alberto");
	for (int i = 0; i < N; i++)
	{
		std::cout <<" Zombie num " << i + 1 << " announcement:" << std::endl;
		zombiePtr[i].announce();
	}
	
	delete[] zombiePtr;

	return (0);
}
