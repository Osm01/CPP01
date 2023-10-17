//
// Created by Oussama Idrissi on 10/13/23.
//

#ifndef CPP01_HUMANA_H
#define CPP01_HUMANA_H

#include "Weapon.h"

class HumanA {
private:
	Weapon		&weapon;
	std::string	name;
public:
	HumanA(std::string name, Weapon &weapon1);
	void	attack();
};


#endif //CPP01_HUMANA_H
