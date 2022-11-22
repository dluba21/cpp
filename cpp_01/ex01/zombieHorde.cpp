#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombie_horde_instance;

	zombie_horde_instance = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie_horde_instance[i].setName(name);
	return (zombie_horde_instance);
}
