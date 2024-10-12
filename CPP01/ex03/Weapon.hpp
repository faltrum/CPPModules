/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:01:07 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:06:31 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <cstring>
# include <iomanip>

/*
La weapon Class
    Private:
        _type: Type of the weapon.
    Public:
        Constructos, Destructor, setType (damos el valor a weapon), 
        getType (devuelve el valor de weapon).
*/
class	Weapon
{
	private:
		std::string	_type;
	
	public:
		Weapon(std::string type);
		~Weapon();

		std::string	getType();
		void	setType(std::string type);
};

#endif
