#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type)
:type(type)
{}

AMateria::AMateria(const AMateria &data)
{
	*this = data;
}

AMateria::~AMateria(){}

AMateria& AMateria::operator = (const AMateria &data)
{
	this->type = data.getType();
	return *this;
}

std::string const & AMateria::getType() const
{
	return this->type;
}
