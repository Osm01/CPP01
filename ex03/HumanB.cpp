#include "HumanB.h"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << GREEN <<this->name << RESET << " attacks with their " << GREEN << this->weapon->getType() << RESET << std::endl;
}

void HumanB::setWeapon(Weapon &weapon1)
{
	this->weapon = &weapon1;
}