#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	std::cout << "Cat default constructor is called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &obj_ref)
{
	std::cout << "Cat copy constructor is called" << std::endl;
	*this = obj_ref;
	this->_brain = obj_ref._brain;
}

Cat &Cat::operator=(const Cat &obj_ref)
{
	std::cout << "Cat assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
	delete _brain;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}


void	Cat::makeSound(void) const
{
	std::cout << "Cat sounds: \"meow\"" << std::endl;
}
