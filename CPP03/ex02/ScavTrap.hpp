#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap 
{

public:
	ScavTrap();
	ScavTrap(std::string& name);
	ScavTrap(const ScavTrap &data);
	~ScavTrap();
	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	
	void guardGate();

	ScavTrap& operator= (const ScavTrap& data);
};

#endif