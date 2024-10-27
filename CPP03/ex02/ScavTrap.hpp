#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include "ClapTrap.hpp"

// ScavTrap class declaration same way as FragTrap

class	ScavTrap: public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap();

		ScavTrap &operator=(const ScavTrap &src);

		void guardGate();
		virtual void		attack(const std::string &target);

};

#endif