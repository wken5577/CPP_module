#include "Character.hpp"

Character::Character()
:name("noname")
{
	this->inventory = new AMateria*[4];
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const std::string name)
:name(name)
{
	this->inventory = new AMateria*[4];
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::Character(const Character &data)
{
	*this = data;
}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	delete[] this->inventory;
}

Character & Character::operator=(const Character &data)
{
	AMateria **newInven = new AMateria*[4];
	AMateria **tarInven = data.getInven();
	this->name = data.getName();
	for(int i = 0; i < 4; i++)
		delete this->inventory[i];
	delete [] this->inventory;
	for(int i = 0; i < 4; i++)
		newInven[i] = tarInven[i]->clone();
	this->inventory = newInven;
	return *this;
}

std::string const & Character::getName() const
{
	return this->name;
}

AMateria** Character::getInven() const
{
	return this->inventory;
}

void Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (0 <= idx && idx < 4)
		this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (0 <= idx && idx < 4 && this->inventory[idx])
		this->inventory[idx]->use(target);
}