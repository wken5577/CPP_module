#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string& name)
:FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor with name called" << std::endl;
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->attackDamage = FragTrap::attackDamage;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
}

DiamondTrap::DiamondTrap(const DiamondTrap &data)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = data;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator= (const DiamondTrap& data)
{
	this->name = data.name;
	this->hitPoints = data.hitPoints;
	this->energyPoints = data.energyPoints;
	this->attackDamage = data.attackDamage;
	return *this;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm " << this->name << ", ClapTrap name = " << ClapTrap::name << std::endl;
}
