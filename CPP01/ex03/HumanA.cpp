/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:19:03 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:24:20 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.hpp"

/*
Constructor de la clase HumanA.
Iniciliza el nombre y el arma del objeto HumanA con los valores dados.
*/
HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weaponA(weapon) {}

//Destructor de clase HumanA
HumanA::~HumanA() {}

/*
M'etodo Attack de la clase HumanA, printea el nombre y el tipo de Weapon usado por
El objeto HumanA
*/
void	HumanA::attack()
{
	std::cout << this->_name << " attack with their " << _weaponA.getType() << std::endl;
}