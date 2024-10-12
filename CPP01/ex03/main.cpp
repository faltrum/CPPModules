/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 18:34:38 by oseivane          #+#    #+#             */
/*   Updated: 2024/10/12 18:39:58 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

/*
Son como 2 mains en uno, pero no se activan los destructors 
hasta que no acaba el main entero.
Que hace?
1. Create a Weapon object club with type "crude spiked club".
2. Create a HumanA object Bob with name "Bob" and club.
3. Bob attacks.
4. Change the type of club to "some other type of club".
5. Bob attacks again.
Se puede ver el cambio de armame n el segundo ataque.
*/
int	main() {
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return (0);
}
