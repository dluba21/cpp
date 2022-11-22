#include "Animal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor is called" << std::endl;
	this->type = "Unknown AAnimal";
}

AAnimal::AAnimal(AAnimal &obj_ref)
{
	std::cout << "AAnimal copy constructor is called" << std::endl;
	*this = obj_ref;
}

AAnimal &AAnimal::operator=(AAnimal &obj_ref)
{
	std::cout << "AAnimal assignment constructor is called" << std::endl;
	this->type = obj_ref.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor is called" << std::endl;
}

std::string		AAnimal::getType() const
{
	return (this->type);

}

void	AAnimal::makeSound(void) const
{
	std::cout << "AAnimal sounds: \"unknown sound\"" << std::endl;
}
