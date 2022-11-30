#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &data)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = data;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator = (const Cat &data)
{
	this->type = data.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow.." << std::endl;
}