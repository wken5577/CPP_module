#include "Span.hpp"
#include <iostream>
#include <vector>
#include <random>

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::vector<int> vec;
	for(int i = 0; i < 10000; i++)
		vec.push_back(i * 2);

	Span sp1 = Span(10000);
	sp1.addNumber(vec.begin(), vec.end());
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	return 0;
}
