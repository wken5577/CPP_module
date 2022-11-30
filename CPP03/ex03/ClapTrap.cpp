#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
:name("name"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string& name)
:name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &data)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	this->name = data.name;
	this->hitPoints = data.hitPoints;
	this->energyPoints = data.energyPoints;
	this->attackDamage = data.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap& data)
{
	this->name = data.name;
	this->hitPoints = data.hitPoints;
	this->energyPoints = data.energyPoints;
	this->attackDamage = data.attackDamage;
	return *this;
}

void ClapTrap::takeDamage(unsigned int amount)
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
	std::cout << "ClapTrap " << this->name << " takeDamage " << amount << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
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
	std::cout << "ClapTrap " << this->name << " repairs itself" << std::endl;
	this->energyPoints--;
	this->hitPoints += amount;
}

void ClapTrap::attack(const std::string& target)
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
	this->energyPoints--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << \
		" causing " << this->attackDamage << " points of damage!" << std::endl;
}
