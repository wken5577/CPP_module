#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &data)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = data;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator = (const Dog &data)
{
	this->type = data.type;
	return *this;	
}

void Dog::makeSound() const
{
	std::cout << "Wall Wall!!" << std::endl;
}