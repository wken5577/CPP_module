#ifndef ICE_HPP
#define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	Ice(std::string const & type);
	Ice(const Ice &data);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);

	Ice & operator = (const Ice &data);
};

#endif