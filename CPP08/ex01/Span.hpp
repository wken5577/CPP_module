#ifndef SPAN_HPP
#define SPAN_HPP

#include <exception>
#include <algorithm> 
#include <iterator>
#include <iostream>

class Span
{
private:
	int 			*arr;
	unsigned int 	curIdx;
	unsigned int	capacity;

	Span();

public:
	Span(unsigned int n);
	Span(const Span &data);
	~Span();

	Span & operator= (const Span &data);

	int shortestSpan();
	int longestSpan();
	void addNumber(int n);

	template <typename T>
	void addNumber(T first, T last)
	{
		if (curIdx == capacity)
			throw std::exception();
		while (curIdx < capacity && first <= last)
		{
			arr[curIdx] = *first;
			first++;
			curIdx++;
		}
		if (first != last)
			throw std::exception();
	}
};

#endif