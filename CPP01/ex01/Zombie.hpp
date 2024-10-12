/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:25:49 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 16:31:01 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <cstring>
# include <iomanip>
# include <string>

/*
Esta clase va a crear un Zombie
En Private el nombre del Zombie.
En Public: Constructor predeterminado, Cosntructor con nombre,
Destrcutor de Clase, seter ara el nombre, un announce para mostrar el nombre.
*/

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie();
		~Zombie();
		
		void	setName(std::string name);
		void	announce();
};

Zombie	*zombieHorde(int n, std::string name);

#endif