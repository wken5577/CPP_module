#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>

Base * generate(void)
{
	std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 99);

	Base *data;
	if (dis(gen) % 3 == 1)
		data =  dynamic_cast<Base *> (new A());
	else if (dis(gen) % 3 == 2)
		data =  dynamic_cast<Base *> (new B());
	else
		data =  dynamic_cast<Base *> (new C());
	return data;
}

void identify(Base* p)
{
	A *a = dynamic_cast<A *> (p);
	B *b = dynamic_cast<B *> (p);
	C *c = dynamic_cast<C *> (p);

	if (a)
		std::cout << "A" << std::endl;
	else if (b)
		std::cout << "B" << std::endl;
	else if (c)
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&> (p);
		(void) a;
		std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast &e) {}

	try
	{
		B &b = dynamic_cast<B&> (p);
		(void) b;
		std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast &e) {}

	try
	{
		C &c = dynamic_cast<C&> (p);
		(void) c;
		std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast &e) {}
}

int main()
{
	Base *base = generate();
	identify(base);
	identify(*base);
}
