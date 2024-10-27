# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

/*
	main function:
		- Create two instances of the ClapTrap class.
		- Set the attack damage of the first instance to 2.
		- Call the attack function of the first instance.
		- Call the take damage function of the second instance.
		- Call the attack function of the second instance.
		- Call the take damage function of the first instance.
		- Call the attack function of the first instance.
		- Set the energy points of the second instance to 0.
		- Call the attack function of the second instance.
		- Call the guard gate function of the second instance.
*/

intmain()
{
	std::cout << "---- Start ----" << std::endl;
	{
		std::cout << "---- Alone ----" << std::endl;
		FragTrap	Empty;
		ClapTrap	Pedro("PedroClap");
		ScavTrap	Juan("JuanScav");
		FragTrap	Marco("MarcoFrag");

		Marco.attack("Miami");
		MArco.ta
	}
}