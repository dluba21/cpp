#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
}

void	HumanB::setWeapon(Weapon &newWeapon)
{
	*_Weapon = newWeapon;
}

void	HumanB::attack(void)
{
	std::cout << _name <<  " attacks with their " << _Weapon->getType();
}
