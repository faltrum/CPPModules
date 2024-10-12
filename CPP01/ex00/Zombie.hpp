/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 15:29:40 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 16:07:37 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <cstring>
# include <iomanip>

/*
Creacion de la clase Zombie, como siempre una parte private
para las variables o atributos. Un parte public para los metodos
con lo que puedes comunicarte con los atributos, ademas del
constructor de clase y destructor. Void announce es un metodo de la
clase que muestra un mensaje con el nombre del Zombie.
*/
class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie(std::string name);
		~Zombie();
		
		void	announce(void) const;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);


#endif