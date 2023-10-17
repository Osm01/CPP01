#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon &weapon1) : weapon(weapon1)
{
	this->name = name;
}

void HumanA::attack()
{
	std::cout << GREEN <<this->name << RESET << " attacks with their " << GREEN << this->weapon.getType() << RESET << std::endl;
}