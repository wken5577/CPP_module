#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &data)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = data;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat& Cat::operator = (const Cat &data)
{
	this->type = data.type;
	delete this->brain;
	Brain *newBrain = new Brain();
	*newBrain = *(data.brain);
	this->brain = newBrain;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow.." << std::endl;
}