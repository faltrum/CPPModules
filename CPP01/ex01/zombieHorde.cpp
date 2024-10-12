/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:31:33 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 16:47:51 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
    Zombie  *zombieNew = new Zombie[n];
    
    for (int i = 0; i < n; i++)
        zombieNew[i].setName(name);
    return (zombieNew);
}
