#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain & data)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = data;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator= (const Brain &data)
{
	this->ideas->clear();
	for(unsigned int i = 0; i < data.ideas->length(); i++)
	{
		this->ideas[i] = data.ideas[i];
	}
	return *this;
}