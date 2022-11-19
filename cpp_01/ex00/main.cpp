#include "Zombie.hpp"

int main()
{
	Zombie	Zombie_stack;
	Zombie	*Zombie_heap;

	Zombie_heap = NULL;
	Zombie_stack.randomChump("Ivan");
	Zombie_heap = Zombie_heap->newZombie("Natasha");
	delete Zombie_heap;
	return (0);
}
