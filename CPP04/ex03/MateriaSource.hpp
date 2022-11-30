#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

public:
	MateriaSource();
	MateriaSource(const MateriaSource &data);
	~MateriaSource();

	MateriaSource & operator = (const MateriaSource &data);

	void learnMateria(AMateria*) = 0;
	AMateria* createMateria(std::string const & type) = 0;
};

#endif