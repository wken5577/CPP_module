#include "FragTrap.hpp"

int main()
{
	std::string name1 = "sc1";
	std::string name2 = "sc2";
	std::string name3 = "sc3";

	FragTrap s1(name1);
	FragTrap s2(name2);
	FragTrap s3(name3);

	s3.attack(name1);
	s1.takeDamage(30);
	s1.takeDamage(30);
	s1.takeDamage(30);
	s1.takeDamage(30);
	s2 = s1;
	s2.takeDamage(30);
	s2.takeDamage(30);
	s1.highFivesGuys();
}