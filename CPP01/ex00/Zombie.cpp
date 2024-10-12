/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:44:31 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 15:53:34 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
Constructor de la  Zombie Class.
Se inicializa el atributo _name de la clase Zombie.
Las variables privadas se escribe con _, es una buena praxis
*/
Zombie::Zombie(std::string name)
{
    this->_name = name;
}

/*
Destructor de la clase Zombie.
Mostrara cuando el zombie sea destruido
*/
Zombie::~Zombie(void)
{
    std::cout << this->_name << " has been destroyed." << std::endl;
}

/*
Esta funcion mostrara un mensaje con el nombre del Zombie.
*/
void    Zombie::announce(void) const
{
    std::cout << this->_name << " BraiiiiinnnnzzzzZ..." << std::endl;
}
