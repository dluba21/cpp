#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ScavTrap scav_trap("John");
	ClapTrap clap_trap("Paul");
	FragTrap frag_trap("Bob");
	FragTrap frag_trap_1(frag_trap);
	
	
	scav_trap.attack("enemy_1");
	clap_trap.attack("enemy_2");
	frag_trap.attack("enemy_3");

	
	
	scav_trap.takeDamage(3);
	clap_trap.takeDamage(10);
	frag_trap.takeDamage(33);
	frag_trap_1.takeDamage(1);

	
	scav_trap.beRepaired(200);
	clap_trap.beRepaired(30);
	frag_trap.beRepaired(300);

	
	scav_trap.guardGate();
	frag_trap.highFivesGuys();

	
	
}
