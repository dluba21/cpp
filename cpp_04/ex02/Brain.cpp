#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor is called" << std::endl;
//	_ideas_string = new string
}

Brain::Brain(const Brain &obj_ref)
{
	std::cout << "Brain copy constructor is called" << std::endl;
	*this = obj_ref;
}

Brain &Brain::operator=(const Brain &obj_ref)
{
	std::cout << "Brain assignment constructor is called" << std::endl;
//	_ideas_string = obj_ref._ideas_string; //???
	(void)obj_ref;
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}
