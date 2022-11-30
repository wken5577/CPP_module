#include "ClapTrap.hpp"

int main()
{
	std::string name1 = "ct1";
	std::string name2 = "ct2";
	std::string name3 = "ct3";

	ClapTrap t1(name1);
	ClapTrap t2(name2);
	ClapTrap t3(name3);
	t2 = t3;

	t2.attack(name1);
	t1.takeDamage(0);
}