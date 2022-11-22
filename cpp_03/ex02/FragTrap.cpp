#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	std::cout << "Nameless FragTrap is created" << std::endl;
	this->setHealPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
};

FragTrap::FragTrap(std::string name):ClapTrap (name)
{
	this->setName(name);
	this->setHealPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	if (this->getName().empty())
		std::cout << "Nameless FragTrap is created" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is created "  << std::endl;
};

FragTrap::FragTrap(const FragTrap &obj_ref)
{
	*this = obj_ref;
	std::cout << "FragTrap " << this->getName() << " is copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj_ref)
{
	if (this == &obj_ref)
		return (*this);
	this->setName(obj_ref.getName());
	this->setEnergyPoints(obj_ref.getEnergyPoints());
	this->setHealPoints(obj_ref.getHitPoints());
	this->setAttackDamage(obj_ref.getAttackDamage());
	std::cout << "FragTrap " << this->getName() << " is assigned" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	if (!this->getName().empty())
		std::cout << "FragTrap " << this->getName() << " is removed" << std::endl;
	else
		std::cout << "Nameless FragTrap is removed" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "FragTrap " << this->getName() << " has 0 hitpoints and can't do anything" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "FragTrap " << this->getName() << " has 0 energy points and can't attack" << std::endl;
		return ;
	}
	this->setEnergyPoints(getEnergyPoints() - 1);
	std::cout << "FragTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
	this->getStatus();
}

void	FragTrap::getStatus(void) const
{
	std::cout << this->getName() << " status:" << std::endl << "Hitpoints: " << this->getHitPoints() << std::endl << "Energy: "  << this->getEnergyPoints() << std::endl << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->getHitPoints() == 0)
	{
		std::cout << "FragTrap " << this->getName() << " has 0 hitpoints and can't do anything" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		std::cout << "FragTrap " << this->getName() << " has 0 energy points and can't attack" << std::endl;
		return ;
	}
	if (this->getName().empty())
		std::cout << "Nameless FragTrap now in Gate keeper mode." << std::endl;
	else
		std::cout << "FragTrap " << this->getName() <<  "Gives high fives"  << std::endl;
}
