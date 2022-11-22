#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor is called" << std::endl;
	this->type = "Unknown WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal &obj_ref)
{
	std::cout << "WrongAnimal copy constructor is called" << std::endl;
	*this = obj_ref;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &obj_ref)
{
	std::cout << "WrongAnimal assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (this->type);

}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sounds: \"unknown sound\"" << std::endl;
}
