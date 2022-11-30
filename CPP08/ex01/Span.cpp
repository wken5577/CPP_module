#include "Span.hpp"
#include <exception>
#include <algorithm> 

Span::Span(){}

Span::Span(unsigned int n)
:curIdx(0), capacity(n)
{
	this->arr = new int[n];
}

Span::~Span()
{
	if(this->arr)
		delete[] arr;
}

Span::Span(const Span &data)
{
	*this = data;
}

Span & Span::operator= (const Span & data)
{
	if (arr)
		delete[] arr;
	int *newArr = new int[data.capacity];
	for(unsigned int i = 0; i < data.curIdx; i++)
		newArr[i] = data.arr[i];
	this->arr = newArr;
	return *this;
}

void Span::addNumber(int n)
{
	if (curIdx == capacity)
		throw std::exception();
	arr[curIdx++] = n;
}

int Span::shortestSpan()
{
	if (curIdx <= 1)
		throw std::exception();
	std::sort(arr, arr + curIdx);
	int result = std::numeric_limits<int>::max();
	for (unsigned int i = 0; i < curIdx - 1; i++)
		result = std::min(arr[i + 1] - arr[i], result);
	if (result == 0)
		throw std::exception();
	return result;
}

int Span::longestSpan()
{
	if (curIdx <= 1)
		throw std::exception();
	std::sort(arr, arr + (curIdx));
	int result = arr[curIdx -1] - arr[0];
	if (result == 0)
		throw std::exception();
	return result;
}