#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &data)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = data;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator = (const Animal &data)
{
	this->type = data.type;
	return *this;
}

void Animal::makeSound() const
{}

std::string Animal::getType() const
{
	return this->type;
}