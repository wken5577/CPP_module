#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &data);
	virtual ~WrongAnimal();

	WrongAnimal& operator = (const WrongAnimal &data);

	void makeSound() const;
	std::string getType() const;
};

#endif