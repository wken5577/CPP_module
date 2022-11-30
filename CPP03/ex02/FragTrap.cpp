#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string& name)
{
	std::cout << "FragTrap constructor with name called" << std::endl;
	this->name = name;
	this->hitPoints = 100; 
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &data)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = data;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}


void FragTrap::takeDamage(unsigned int amount)
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
	std::cout << "FragTrap " << this->name << " takeDamage " << amount << std::endl;
	this->hitPoints = this->hitPoints - amount;
}

void FragTrap::beRepaired(unsigned int amount)
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
	std::cout << "FragTrap " << this->name << " repairs itself" << std::endl;
	this->hitPoints = this->hitPoints + amount;
	this->energyPoints -= 1;
}

void FragTrap::attack(const std::string& target)
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
	std::cout << "FragTrap " << this->name << " attacks " << target << \
		" causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints -= 1;
}

FragTrap& FragTrap::operator= (const FragTrap& data)
{
	this->name = data.name;
	this->hitPoints = data.hitPoints;
	this->energyPoints = data.energyPoints;
	this->attackDamage = data.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "let's high five!!!!!" << std::endl;
}
