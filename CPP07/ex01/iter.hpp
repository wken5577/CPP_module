#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* arr, int size, void (*func)(const T&))
{
	if (arr == NULL || size <= 0)
		return;
	for (int i = 0; i < size; i++)
		func(arr[i]);
}

#endif