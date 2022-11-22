#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	if (_name.empty())
		std::cout << "Nameless ClapTrap is created" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " is created "  << std::endl;
}
ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	
	std::cout << "ClapTrap " << _name << " is created "  << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &objRef)
{
	this->_name = objRef.getName();
	this->_hit_points = objRef.getHitPoints();
	this->_energy_points = objRef.getEnergyPoints();
	this->_attack_damage = objRef.getAttackDamage();
	std::cout << "ClapTrap " << this->getName() << " is copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &objRef)
{
	if (this == &objRef)
		return (*this);
	this->_name = objRef.getName();
	this->_hit_points = objRef.getHitPoints();
	this->_energy_points = objRef.getEnergyPoints();
	this->_attack_damage = objRef.getAttackDamage();
	std::cout << "ClapTrap " << this->getName() << " is assigned" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	if (!this->getName().empty())
		std::cout << "ClapTrap " << this->getName() << " is removed" << std::endl;
	else
		std::cout << "Nameless ClapTrap is removed" << std::endl;
		
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

unsigned		ClapTrap::getHitPoints(void) const
{
	return (_hit_points);
}

unsigned		ClapTrap::getEnergyPoints(void) const
{
	return (_energy_points);
}

unsigned		ClapTrap::getAttackDamage(void) const
{
	return (_attack_damage);
}

void	ClapTrap::setName(std::string name)
{
	_name = name;
}

void	ClapTrap::setHealPoints(unsigned hit_points)
{
	_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(unsigned energy_points)
{
	_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(unsigned attack_damage)
{
	_attack_damage = attack_damage;
}

void	ClapTrap::takeDamage(unsigned amount)
{
	if (amount > _hit_points)
	{
		_hit_points = 0;
		std::cout << "ClapTrap " << this->getName() << " losed all hitpoints" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " losed " << amount << " hitpoint(s)" << std::endl;
	_hit_points -= amount;
	this->getStatus();
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has 0 hitpoints and can't do anything" << std::endl;
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has 0 energy points and can't attack" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->getStatus();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has 0 hitpoints and can't do anything" << std::endl;
		return ;
	}
	if (_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->getName() << " has 0 energy points and can't repair himself" << std::endl;
		return ;
	}
	_hit_points += amount;
	_energy_points--;
	std::cout << "ClapTrap " << this->getName() << " has repaired." << std::endl;
	this->getStatus();
}

void	ClapTrap::getStatus(void) const
{
	std::cout << this->getName() << " status:" << std::endl << "Hitpoints: " << this->getHitPoints() << std::endl << "Energy: "  << this->getEnergyPoints() << std::endl << std::endl ;
}
