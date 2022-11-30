#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{

public:
	FragTrap();
	FragTrap(std::string& name);
	FragTrap(const FragTrap &data);
	~FragTrap();
	virtual void attack(const std::string& target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	
	void highFivesGuys(void);

	FragTrap& operator= (const FragTrap& data);
};

#endif