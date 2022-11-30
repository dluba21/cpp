#include "Classes.hpp"

Base::~Base()
{
}

Base	*generate(void)
{
	std::srand(std::time(nullptr));
	switch (rand() % 3){
		case a_class:
			std::cout << "A created!" << std::endl;;
			return new A();
		case b_class:
			std::cout << "B created!" << std::endl;;
			return new B();
		case c_class:
			std::cout << "C created!" << std::endl;;
			return new C();
		default:
			return NULL;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "it's A (pointer)" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "it's B (pointer)" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "it's C (pointer)" << std::endl;
}

void	identify(Base &r)
{
	try
	{
		(void)dynamic_cast<A &>(r);
		std::cout << "it's A (reference)" << std::endl;
	}
	catch (std::bad_cast e) {}
	try
	{
		(void)dynamic_cast<B &>(r);
		std::cout << "it's B (reference)" << std::endl;
	}
	catch (std::bad_cast e) {}
	try
	{
		(void)dynamic_cast<C &>(r);
		std::cout << "it's C (reference)" << std::endl;
	}
	catch (std::bad_cast e) {}
}
