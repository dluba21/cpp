#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Constructor " << _name << " is called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << ": I am died\n";
}

void 		Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}

std::string Zombie::getName(void)
{
	return (_name);
}
void		Zombie::setName(std::string name)
{
	_name = name;
}
