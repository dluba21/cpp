#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::Zombie(std::string name): _name(name)
{
	std::cout << "Constructor " << _name << " is called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " is died\n";
}

std::string Zombie::getName(void)
{
	return (_name);
}

void		Zombie::setName(std::string name)
{
	_name = name;
}

void 		Zombie::announce(void)
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ...\n";
}
