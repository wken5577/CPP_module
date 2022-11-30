#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#include <iostream>
int main()
{
//	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound(); //will output the cat sound!

	delete j;
	delete i;
}