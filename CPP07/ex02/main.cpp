#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> a(10);
	for(int i = 0; i < 10; i++)
		a[i] = i;
	for(int i = 0; i < 10; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;

	Array<std::string> strArr(10);
	for(int i = 0; i < 10; i++)
	{
		strArr[i] = "hi";
		std::cout << strArr[i] << " ";
	}
	std::cout << std::endl;
	//strArr[10];
}
