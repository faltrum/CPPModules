#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>
# include <cstring>
# include <iomanip>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hitPoints;
		int				_energyPoints;
		int				_attackDamage;

	public:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &src);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &src);

		void			setName(const std::string &name);
		void			setHitPoints(int const hitPoints);
		void			setEnergyPoints(int const energyPoints);
		void			setAttackDamage(int const attackDamage);
		
		std::string		getName() const;
		int				getHitPoints() const;
		int				getEnergyPoints() const;
		int				getAttackDamage() const;

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif