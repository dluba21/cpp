#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"



class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &obj_ref);
	FragTrap &operator=(const FragTrap &obj_ref);
	~FragTrap();
	
	void	attack(const std::string& target);
	void	getStatus(void) const;

	void highFivesGuys(void);
};

#endif

