#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>

enum	classNames
{
	a_class,
	b_class,
	c_class
};

class Base
{
public:
	virtual ~Base();
};

class A: public Base
{
};

class B: public Base
{
};

class C: public Base
{
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base &r);

#endif
