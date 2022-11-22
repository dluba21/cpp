#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &objRef);
	ClapTrap &operator=(const ClapTrap &objRef);
	~ClapTrap();
	unsigned		getHitPoints(void) const;
	unsigned		getEnergyPoints(void) const;
	unsigned		getAttackDamage(void) const;
	void			getStatus(void) const;
	std::string		getName(void) const;
	void			setName(std::string name);
	void			setHealPoints(unsigned hit_points);
	void			setEnergyPoints(unsigned energy_points);
	void			setAttackDamage(unsigned attack_damage);
	void			attack(const std::string& target);
	void			takeDamage(unsigned amount);
	void			beRepaired(unsigned int amount);


private:
	std::string			_name;
	unsigned			_hit_points;
	unsigned			_energy_points;
	unsigned			_attack_damage;
};


#endif
