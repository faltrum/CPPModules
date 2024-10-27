# include "ClapTrap.hpp"

/*
Funcion principal del programa
-Se crean 2 ClapTrap objetos
-Se atacan y reparan.
*/

int	main(void)
{
	std::cout << "---- Start ----" << std::endl;
	{
		std::cout << "---- Alone ----" << std::endl;
		ClapTrap Marco("Marco");
		ClapTrap Juan("Juan");

		Marco.attack("Bin Laden");
		Marco.beRepaired(3);
		Marco.takeDamage(5);
		Marco.attack("Stalin");
		Marco.beRepaired(100);

		Juan.attack("Fidel Castro");
		Juan.attack("2");
		Juan.attack("3");
		Juan.attack("4");
		Juan.attack("5");
		Juan.attack("6");
		Juan.attack("7");
		Juan.attack("8");
		Juan.attack("9");
		Juan.attack("10");
		Juan.attack("11");
		Juan.beRepaired(15);
		std::cout << std::endl << std::endl << std::endl;
	}
	{
		std::cout << "---- Both ----" << std::endl;
		ClapTrap Elon("ELon");
		ClapTrap Mark("Mark");

		Elon.setAttackDamage(3);
		Mark.setAttackDamage(1);

		Elon.attack(Mark.getName());
		Mark.takeDamage(Elon.getAttackDamage());

		Mark.attack(Elon.getName());
		Elon.takeDamage(Elon.getAttackDamage());

		Mark.attack(Elon.getName());
		Elon.takeDamage(Elon.getAttackDamage());

		if (Elon.getHitPoints() < Mark.getHitPoints())
			std::cout << "Mark wins!" << std::endl;
		else if (Elon.getHitPoints() > Mark.getHitPoints())
			std::cout << "Elon wins!" << std::endl;
		else
			std::cout << "It's a tie!" << std::endl;
		std::cout << std::endl;
	}
	std::cout << "---- End ----" << std::endl;
	return (0);
}