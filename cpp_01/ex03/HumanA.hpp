#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon &newWeapon);
	void	attack();
private:
	Weapon	*_Weapon;
	std::string _name;
};


#endif
