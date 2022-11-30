#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
	this->type = "cure";
}

Cure::Cure(std::string const &type)
{
	this->type = type;
}

Cure::Cure(const Cure &data)
{
	*this = data;
}

Cure::~Cure(){}

Cure& Cure::operator = (const Cure &data)
{
	this->type = data.getType();
	return *this;
}
AMateria * Cure::clone() const
{
	return new Cure(this->type);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName()\
		<< "’s wounds *" << std::endl;
}