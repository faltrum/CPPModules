# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

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
int	main(void)
{
	ClapTrap Fernando("Fernando");
	ScavTrap Tony("Tony");

	std::cout << std::endl;
	std::cout << "ScavTrap attack: " << Tony.getAttackDamage() << std::endl;
	std::cout << "ScatRrap hit points: " << Tony.getHitPoints() << std::endl;
	std::cout << "ScapTrap energy: " << Tony.getEnergyPoints() << std::endl;

	Fernando.setAttackDamage(3);
	std::cout << std::endl;

	Fernando.attack(Tony.getName());
	Tony.takeDamage(Fernando.getAttackDamage());
	Tony.attack(Fernando.getName());
	Fernando.takeDamage(Tony.getAttackDamage());
	Fernando.attack(Tony.getName());
	Tony.setEnergyPoints(0);
	Tony.attack(Fernando.getName());

	Tony.guardGate();
	std::cout << std::endl;
	return (0);
}