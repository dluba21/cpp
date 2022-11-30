#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor is called" << std::endl;
}

Brain::Brain(const Brain &obj_ref)
{
	std::cout << "Brain copy constructor is called" << std::endl;
	*this = obj_ref;
}

Brain &Brain::operator=(const Brain &obj_ref)
{
	std::cout << "Brain assignment constructor is called" << std::endl;
	(void)obj_ref;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}
