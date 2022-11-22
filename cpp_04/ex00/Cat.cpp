#include "Cat.hpp"

Cat::Cat(): Animal()
{
	std::cout << "Cat default constructor is called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(Cat &obj_ref)
{
	std::cout << "Cat copy constructor is called" << std::endl;
	*this = obj_ref;
}

Cat &Cat::operator=(Cat &obj_ref)
{
	std::cout << "Cat assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}


void	Cat::makeSound(void) const
{
	std::cout << "Cat sounds: \"meow\"" << std::endl;
}
