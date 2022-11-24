#include "Class.hpp"

Class::Class()
{
	std::cout << "Class default constructor is called" << std::endl;
}

Class::Class(Class &obj_ref)
{
	std::cout << "Class copy constructor is called" << std::endl;
	*this = obj_ref;
}

Class &Class::operator=(Class &obj_ref)
{
	std::cout << "Class assignment constructor is called" << std::endl;
	return (*this);
}

Class::~Class()
{
	std::cout << "Class destructor is called" << std::endl;
}
