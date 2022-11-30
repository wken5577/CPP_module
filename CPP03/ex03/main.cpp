#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
	std::string name1 = "sc1";

	DiamondTrap d1(name1);

	d1.attack("target");
	d1.ScavTrap::takeDamage(30);
	d1.FragTrap::takeDamage(20);
	d1.ScavTrap::takeDamage(30);
	d1.ScavTrap::takeDamage(30);
	d1.ScavTrap::takeDamage(30);
	
	d1.whoAmI();
}