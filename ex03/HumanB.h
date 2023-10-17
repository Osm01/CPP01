//
// Created by Oussama Idrissi on 10/13/23.
//

#ifndef CPP01_HUMANB_H
#define CPP01_HUMANB_H

#include "Weapon.h"

class HumanB {
private:
	Weapon		*weapon;
	std::string	name;
public:
	HumanB(std::string name);
	void	attack();
	void	setWeapon(Weapon &weapon1);
};


#endif //CPP01_HUMANB_H
