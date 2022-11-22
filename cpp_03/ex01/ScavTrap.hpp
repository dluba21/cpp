#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

//#ifndef CLAPTRAP_HPP
#include "ClapTrap.hpp"



class ScavTrap: public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &obj_ref);
	ScavTrap &operator=(const ScavTrap &obj_ref);
	~ScavTrap();
	
	void	attack(const std::string& target);
	void	getStatus(void) const;

	void		guardGate();
//	ScavTrap
//private:
	
};

#endif
