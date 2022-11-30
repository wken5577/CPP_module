#include "iter.hpp"
#include <string>
#include <iostream>

template <typename N>
void print(const N &data)
{
	std::cout << data << std::endl;
}

int main()
{
	std::string strs[] = {"aaa", "bbb", "ccc"};
	iter(strs, 3, print);

	int arr[] = {1, 2, 3};
	iter(arr, 3, print);
}