/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:11:43 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:18:42 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
# include "Weapon.hpp"

/*
Definicion de la clase HumanA, contiene nombre humano y tipo weapon.
Private:
	El nombre del objeto Humano.
	Referencia al objeto Weapon , por eso se usa el & simbolo.
Public:
	Constructor, destructor y attack, printea el nombre del objeto humano A
	y el tipoo de Weapon usado.
*/

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weaponA;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack();
		
};

#endif
