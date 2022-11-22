#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Zombie
{
public:
	Zombie();
	Zombie(std::string);
	~Zombie();
	std::string	getName(void);
	void		setName(std::string name);
	void 		announce(void);
private:
	std::string	_name;
};

Zombie*		zombieHorde(int N, std::string name);


#endif
