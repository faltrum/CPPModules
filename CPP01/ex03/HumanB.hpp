/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:24:47 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:30:38 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_H
# define HUMANB_H
# include "Weapon.hpp"

/*
Declaracion y creacion de la clase HumanB
Private:
	Nombre del objeto HumanB
	Puntero a l objeto Weapon (por eso *)
Publico:
Constructor que inicliza el objeto con el nombre de HumanB
Destructor
Seter y geter, el metodo attack
*/
class	HumanB {

	private:
		std::string	_name;
		Weapon		*_weaponB;

	public:
		HumanB(std::string name);
		~HumanB();

		std::string	getName();
		void		setWeapon(Weapon &weapon);
		void		attack();
};

#endif
