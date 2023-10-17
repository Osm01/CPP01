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
	int		i;
	Zombie	*zombie = new Zombie[N];

	i = 0;
	while (i < N)
	{
		zombie[i].name =  name + "_" + std::to_string(i);
		i ++;
	}
	return (zombie);
}

Zombie::~Zombie()
{
    std::cout <<"The Zombie : " << RED << this->name << RESET << " is done !!" << std::endl;
}