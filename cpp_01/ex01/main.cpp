#include "Zombie.hpp"

int main()
{
	Zombie *Zombie_horde_instance;
	int	N;

	Zombie_horde_instance = NULL;
	N = 10;
	Zombie_horde_instance = zombieHorde(N, "Voodoo");
	for (int i = 0; i < N; i++)
		Zombie_horde_instance[i].announce();
	delete[] Zombie_horde_instance;
	return (0);
}
