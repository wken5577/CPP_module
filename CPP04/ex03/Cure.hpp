#ifndef CURE_HPP
#define CURE_HPP

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{

public:
	Cure();
	Cure(std::string const & type);
	Cure(const Cure &data);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);

	Cure & operator = (const Cure &data);
};

#endif