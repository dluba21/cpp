#include "ClapTrap.hpp"

int main()
{
//	ClapTrap obj_1;
	ClapTrap obj_2("John");
//	ClapTrap obj_3 = obj_2;
//	std::cout << obj_2.getHitPoints() << std::endl;
//	for (int i = 0; i < 3; i++)
//		obj_2.beRepaired(1);
//	for (int i = 0; i < 5; i++)
	obj_2.setAttackDamage(10);
	obj_2.takeDamage(3);
	obj_2.beRepaired(10);
	obj_2.attack("enemy");
	
	
}
