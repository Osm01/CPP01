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

Zombie *Zombie::newZombie(std::string name)
{
    Zombie *zombie = new Zombie(name);
    return (zombie);
}

void Zombie::randomChump(std::string name)
{
    Zombie zombie;
    zombie.name = name;
    zombie.announce();
}

Zombie::~Zombie()
{
    std::cout <<"The Zombie : " << RED << this->name << RESET << " is done !!" << std::endl;
}