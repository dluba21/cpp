#include "ScalarCast.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: number of args not valid. Please, enter one argument." << std::endl;
		return (0);
	}
	ScalarCast obj(argv[1]);
	obj.PrintResult();
}
