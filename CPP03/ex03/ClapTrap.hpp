#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
protected:
	std::string	name;
	int			hitPoints;
	int			energyPoints;
	int			attackDamage;

public:
	ClapTrap();
	ClapTrap(const ClapTrap &data);
	~ClapTrap();
	ClapTrap(std::string& name);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap& operator= (const ClapTrap& data);
};

#endif