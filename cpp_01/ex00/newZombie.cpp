#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie	*Zombie_instance_heap;

	Zombie_instance_heap = new	Zombie;
	if (!Zombie_instance_heap)
	{
		std::cout << "Allocation error!\n";
		return (NULL);
	}
	Zombie_instance_heap->setName(name);
	Zombie_instance_heap->announce();
	return (Zombie_instance_heap);
}
