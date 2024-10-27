#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <cstring>
# include <iomanip>
# include "ClapTrap.hpp"

/*
ScavTrap declaracion de clase publica:
¿Por qué?
- Es un clase derivada de ClapTrap
- Se agencia los miembros public y protected  de CalpTrap
- Puede acceder a los miembros protectes de CalpTrap
No puede acceder a los privados, por eso en la clase ClapTrap se ha
cambiado de private a protected.
*/

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &src);

		void			guardGate();
		virtual void	attack(const std::string &target);
};

#endif