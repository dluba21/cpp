#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(Dog &obj_ref)
{
	std::cout << "Dog copy constructor is called" << std::endl;
	*this = obj_ref;
}

Dog &Dog::operator=(Dog &obj_ref)
{
	std::cout << "Dog assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sounds: \"woof\"" << std::endl;
}

