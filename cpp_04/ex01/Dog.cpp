#include "Dog.hpp"

Dog::Dog(): Animal()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &obj_ref)
{
	std::cout << "Dog copy constructor is called" << std::endl;
	*this = obj_ref;
}

Dog &Dog::operator=(const Dog &obj_ref)
{
	std::cout << "Dog assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	this->_brain = obj_ref._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
	delete _brain;
}

std::string	Dog::getType(void) const
{
	return (this->type);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sounds: \"woof\"" << std::endl;
}

