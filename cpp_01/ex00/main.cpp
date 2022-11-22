#include "Zombie.hpp"

int main()
{
	Zombie	*Zombie_heap = NULL;

	Zombie_heap = newZombie("Heap_zombie");
	randomChump("Stack_zombie");
	Zombie_heap->announce();
	delete Zombie_heap;
}
