/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:54:11 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 15:58:33 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Esta funcion crea un nuevo Zombien en el HEAP.
Restorna un nuevo Zombie.

Que es el HEAP?
Es una region de memoria que no se gestiona automaticamente.
Eres responsable de manejarlo, sobretodo de liberar la memoria
alojada con el operador DELETE.

new:
    - Alloja la memoria en el HEAP.
    - Llama la constructor del objeto.
    - Devuelve el puntero del objeto.
*/

Zombie  *newZombie(std::string name)
{
    Zombie *zombieNew = new Zombie(name);
    return (zombieNew);
}
