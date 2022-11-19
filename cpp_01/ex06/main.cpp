#include "Harl.hpp"

int main(int argc, char **argv)
{
	class Harl	Harl_instance;

	if (argc != 2)
	{
		std::cout << "Error: incorrect number arguments, need one" << std::endl;
		return (0);
	}
	Harl_instance.complain(argv[1]);
	return (0);
}

