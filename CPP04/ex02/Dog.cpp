#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &data)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = data;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog& Dog::operator = (const Dog &data)
{
	this->type = data.type;
	delete this->brain;
	Brain *newBrain = new Brain();
	*newBrain = *(data.brain);
	this->brain = newBrain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wall Wall!!" << std::endl;
}