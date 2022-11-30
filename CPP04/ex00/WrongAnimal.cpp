#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &data)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = data;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &data)
{
	this->type = data.type;
	return *this;	
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAminal makeSound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}