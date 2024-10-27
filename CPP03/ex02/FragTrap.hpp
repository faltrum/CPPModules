#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <cstring>
#include <iomanip>
#include "ClapTrap.hpp"

// FragTrap class declaration same way as ScavTrap

class	FragTrap: public ClapTrap {

	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &src);
		~FragTrap();

		FragTrap &operator=(const FragTrap &src);

		void highFivesGuys(void);
};

#endif