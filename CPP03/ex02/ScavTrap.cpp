#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string& name)
{
	std::cout << "ScavTrap constructor with name called" << std::endl;
	this->name = name;
	this->hitPoints = 100; 
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &data)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = data;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "i don't have energe!!" << std::endl;
		return ;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << "i don't have hitPoints!!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " takeDamage " << amount << std::endl;
	this->hitPoints = this->hitPoints - amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "i don't have energe!!" << std::endl;
		return ;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << "i don't have hitPoints!!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " repairs itself" << std::endl;
	this->hitPoints = this->hitPoints + amount;
	this->energyPoints -= 1;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
	{
		std::cout << "i don't have energe!!" << std::endl;
		return ;
	}
	else if (this->hitPoints <= 0)
	{
		std::cout << "i don't have hitPoints!!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << \
		" causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints -= 1;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap& ScavTrap::operator= (const ScavTrap& data)
{
	this->name = data.name;
	this->hitPoints = data.hitPoints;
	this->energyPoints = data.energyPoints;
	this->attackDamage = data.attackDamage;
	return *this;
}
