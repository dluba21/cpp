#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	Zombie_instance_stack(name);

	Zombie_instance_stack.announce();
}
