/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:33:48 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 16:37:21 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Constructor predeterminado

Zombie::Zombie(){}

//Destructor

Zombie::~Zombie(void)
{
    std::cout << this->_name << " has been destroyed." << std::endl;
}

//Seter el nombre del Zombie

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

// Anunciar el nombre del Zombie

void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiinnzzzzZ..." << std::endl;
}
