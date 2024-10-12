/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:58:59 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 16:22:56 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Esta funcion crea un zombie en el Stack.
Que es el Stack?
Es una region de la memoria que se maneja automaticamente.
Cuando declaras una variable en el stack, la memoria es
alojada automaticamente y cuando la variable ya no se necesita,
la memoria se libera automaticamente.
*/

void	randomChump(std::string name)
{
	Zombie chump = Zombie(name);
	chump.announce();
}
