
#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

private:
	AMateria	**inventory;
	std::string	name;

public:
	Character();
	Character(std::string name);
	Character(const Character &data);
	~Character();

	std::string const & getName() const;
	AMateria** getInven() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	Character & operator = (const Character & data);

};

#endif