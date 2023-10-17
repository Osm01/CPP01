#ifndef CPP01_WEAPON_H
#define CPP01_WEAPON_H

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

class Weapon
{
private:
	std::string	type;
public:
	Weapon();
	~Weapon();
	Weapon(std::string type);
	const std::string	&getType();
	void				setType(std::string type);
};

#endif //CPP01_WEAPON_H
