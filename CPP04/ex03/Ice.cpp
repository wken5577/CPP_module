#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(std::string const &type)
{
	this->type = type;
}

Ice::Ice(const Ice &data)
{
	*this = data;
}

Ice::~Ice(){}

Ice& Ice::operator = (const Ice &data)
{
	this->type = data.getType();
	return *this;
}
AMateria * Ice::clone() const
{
	return new Ice(this->type);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()\
		<< " *" << std::endl;
}