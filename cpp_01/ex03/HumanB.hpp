#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	void	setWeapon(Weapon &newWeapon);
	void	attack();
	
private:
	std::string _name;
	Weapon	*_Weapon;
};


#endif
