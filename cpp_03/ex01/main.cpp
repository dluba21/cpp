#include "ScavTrap.hpp"

int main()
{
//	ClapTrap obj_1;
	ScavTrap scav_trap("John");
	ClapTrap clap_trap("Paul");
	
	
	scav_trap.attack("enemy_1");
	clap_trap.attack("enemy_2");
	
	
	scav_trap.takeDamage(3);
	clap_trap.takeDamage(10);
	
	scav_trap.beRepaired(200);
	clap_trap.beRepaired(30);
	
	scav_trap.guardGate();
//	obj_2.ClapTrap::attack("enemy");

//	ClapTrap obj_3 = obj_2;
//	std::cout << obj_2.getHitPoints() << std::endl;
//	for (int i = 0; i < 3; i++)
//		obj_2.beRepaired(1);
//	for (int i = 0; i < 5; i++)
//	obj_2.setAttackDamage(10);
//	obj_2.takeDamage(3);
//	obj_2.beRepaired(10);
//	obj_2.attack("enemy");
	
	
}
