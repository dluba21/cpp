#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
public:
	Zombie(): _name(""){};
	~Zombie()
	{
		std::cout << _name << ": I am died\n";
	}
	std::string	getName(void);
	void		setName(std::string name);
	void 		announce(void);
	void		randomChump(std::string name);
	Zombie*		newZombie(std::string name);
private:
	std::string	_name;
};



#endif
