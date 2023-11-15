#include "Zombie.h"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

void    Zombie::announce()
{
    std::cout << GREEN <<this->name << RESET << ":" << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*Zombie::zombieHorde(int N, std::string name)
{
	int					i;
	std::stringstream	ss;
	Zombie	*zombie = new Zombie[N];

	i = 0;
	while (i < N)
	{
		ss << i;
		zombie[i].name =  name + "_" + ss.str();
		ss.str("");
		i ++;
	}
	return (zombie);
}

Zombie::~Zombie()
{
    std::cout <<"The Zombie : " << RED << this->name << RESET << " is done !!" << std::endl;
}