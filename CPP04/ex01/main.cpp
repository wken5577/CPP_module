#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

#include <iostream>
int main()
{
	int num  = 5;
	Animal **animalArr = new Animal*[10];
	for(int i = 0; i < num; i++)
	{
		if (i < num / 2)
			animalArr[i] = new Dog();
		else
			animalArr[i] = new Cat();
	}

	for(int i = 0; i < num; i++)
	{
		std::cout << animalArr[i]->getType() << std::endl;
		animalArr[i]->makeSound();
	}


	for(int i = 0; i < num; i++)
	{
		delete animalArr[i];
	}
	delete[] animalArr;
	// system("leaks a.out");
}