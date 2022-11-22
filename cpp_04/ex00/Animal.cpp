#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor is called" << std::endl;
	this->type = "Unknown animal";
}

Animal::Animal(Animal &obj_ref)
{
	std::cout << "Animal copy constructor is called" << std::endl;
	*this = obj_ref;
}

Animal &Animal::operator=(Animal &obj_ref)
{
	std::cout << "Animal assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor is called" << std::endl;
}

std::string		Animal::getType() const
{
	return (this->type);

}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sounds: \"unknown sound\"" << std::endl;
}
