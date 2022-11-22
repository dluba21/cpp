#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon)
{
	_Weapon = &Weapon;
	_name = name;
}

void	HumanA::attack(void)
{
	std::cout << _name <<  " attacks with their " << _Weapon->getType() << std::endl;
}
