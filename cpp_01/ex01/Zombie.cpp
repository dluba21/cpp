#include "Zombie.hpp"

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
