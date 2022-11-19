#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie	Zombie_instance_stack;

	Zombie_instance_stack.setName(name);
	Zombie_instance_stack.announce();
}
