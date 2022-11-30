#include "ScavTrap.hpp"

int main()
{
	std::string name1 = "sc1";
	std::string name2 = "sc2";
	std::string name3 = "sc3";

	ScavTrap s1(name1);
	ScavTrap s2(name2);
	ScavTrap s3(name3);

	s3.attack(name1);
	s1.takeDamage(20);
	s1.takeDamage(20);
	s1.takeDamage(20);
	s1.takeDamage(20);
	s2 = s1;
	s2.takeDamage(20);
	s2.takeDamage(20);
	s1.guardGate();
}