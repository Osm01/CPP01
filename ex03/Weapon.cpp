#include "Weapon.h"

Weapon::Weapon(){}
Weapon::~Weapon()
{
	std::cout << RED << this->type << RESET << " Weapon is gone !!!" << std::endl;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}