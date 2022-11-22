#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon &newWeapon);
private:
	Weapon	*_Weapon;
	std::string _name;
};


#endif
