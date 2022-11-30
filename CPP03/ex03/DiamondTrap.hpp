#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string& name);
	DiamondTrap(const DiamondTrap &data);
	~DiamondTrap();

	virtual void attack(const std::string& target);
	void whoAmI();
	DiamondTrap& operator= (const DiamondTrap& data);
};

#endif