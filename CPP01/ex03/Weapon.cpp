/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:06:57 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:10:57 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructor con parametros

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

//Destructor 
Weapon::~Weapon(){}

//Set the type
void	Weapon::setType(std::string type)
{
	this->_type = type;
	return;
}

//Get the type
std::string Weapon::getType()
{
	return(_type);
}
