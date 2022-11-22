#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	std::cout << "Nameless ScavTrap is created" << std::endl;
	this->setHealPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
};

ScavTrap::ScavTrap(std::string name):ClapTrap (name)
{
	this->setName(name);
	this->setHealPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	if (this->getName().empty())
		std::cout << "Nameless ScavTrap is created" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is created "  << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &obj_ref)
{
	*this = obj_ref;
	std::cout << "ScavTrap " << this->getName() << " is copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj_ref)
{
	if (this == &obj_ref)
		return (*this);
	this->setName(obj_ref.getName());
	this->setEnergyPoints(obj_ref.getEnergyPoints());
	this->setHealPoints(obj_ref.getHitPoints());
	this->setAttackDamage(obj_ref.getAttackDamage());
	std::cout << "ScavTrap " << this->getName() << " is assigned" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	if (!this->getName().empty())
		std::cout << "ScavTrap " << this->getName() << " is removed" << std::endl;
	else
		std::cout << "Nameless ScavTrap is removed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has 0 hitpoints and can't do anything" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has 0 energy points and can't attack" << std::endl;
		return ;
	}
	this->setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->getStatus();
}

void	ScavTrap::getStatus(void) const
{
	std::cout << this->getName() << " status:" << std::endl << "Hitpoints: " << this->getHitPoints() << std::endl << "Energy: "  << this->getEnergyPoints() << std::endl << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has 0 hitpoints and can't do anything" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " has 0 energy points and can't attack" << std::endl;
		return ;
	}
	if (this->getName().empty())
		std::cout << "Nameless ScavTrap now in Gate keeper mode." << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() <<  " is now in Gate keeper mode."  << std::endl;
}
//unsigned		getHitPoints(void) const;
//unsigned		getEnergyPoints(void) const;
//unsigned		getAttackDamage(void) const;
//void			getStatus(void) const;
//std::string		getName(void) const;
