#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &data)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = data;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat &data)
{
	this->type = data.type;
	return *this;	
}
