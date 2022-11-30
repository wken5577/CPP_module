#ifndef SPAN_HPP
#define SPAN_HPP

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

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
};

#endif