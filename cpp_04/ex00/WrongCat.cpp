#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
	std::cout << "WrongCat default constructor is called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(WrongCat &obj_ref)
{
	std::cout << "WrongCat copy constructor is called" << std::endl;
	*this = obj_ref;
}

WrongCat &WrongCat::operator=(WrongCat &obj_ref)
{
	std::cout << "WrongCat assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

std::string	WrongCat::getType(void) const
{
	return (this->type);
}


void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sounds: \"meow\"" << std::endl;
}

