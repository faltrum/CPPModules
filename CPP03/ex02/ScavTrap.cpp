#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap default constructor called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// Constructor
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
	std::cout << "ScavTrap construcor called: " << this->_name << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	std::cout << "ScavTrap copy constructor called: " << this->_name << std::endl;
	*this = src;
}

// Destructor
ScavTrap::~ScavTrap() { std::cout << "ScavTrap Destructor called: " << this->_name << std::endl;}

// Copy assignment operator
ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap copy assigment operator: " << this->_name << std::endl;
	if (this != &src) {
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
	}
	return (*this);
}

/*
	Guard Gate member function
	Prints the name of the ScavTrap and the message "is in Gate keeper mode."
*/
void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is in Gate keeper mode.";
	std::cout << std::endl << std::endl;
}

//Functions
/*
	Attack function:

	Simulation of an attack.
		- If the hit points are 0, the ClapTrap can not attack.
		- If the energy points are 0, the ClapTrap can not attack.
		- If the ClapTrap can attack, the energy points are reduced by 1.
*/
void	ScavTrap::attack(const std::string &target) {
	if ( this->_hitPoints == 0)
		std::cout << "ScavTrap " << this->_name << " can not attack (0 hit points)." << std::endl;
	else if (this->_energyPoints == 0)
		std::cout << "ScavTrap " << this->_name << " can not attack (0 energy points)." << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage;
		std::cout << " points of damage!" <<std::endl;

		std::cout << this->_name << " has " << this->_hitPoints << " hit points and " << this->_energyPoints;
		std::cout << " energy points." << std::endl << std::endl;
	}
}