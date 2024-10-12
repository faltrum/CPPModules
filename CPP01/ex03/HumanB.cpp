/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:32:24 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:41:12 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_name = name;
	this->_weaponB = NULL;
}

//Destructor
HumanB::~HumanB() {}

/*
Getter
*/
std::string HumanB::getName() 
{
	return (_name);
}

/*
Setter
*/
void	HumanB::setWeapon(Weapon &weapon) 
{
	this->_weaponB = &weapon;
}

/*
	Attack function for HumanB class.
	Prints the name of the HumanB object and the type of weapon they are using.
*/
void	HumanB::attack() 
{
	if (this->_weaponB == NULL)
		std::cout << "No weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with their " << _weaponB->getType() << std::endl;
}
