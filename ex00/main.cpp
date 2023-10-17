#include "Zombie.h"

int main()
{
    Zombie	main_zombie("STACK1");
    Zombie	*zombie_ptr;
	zombie_ptr = main_zombie.newZombie("HEAP");
	main_zombie.randomChump("STACK2");
	zombie_ptr->announce();
	delete zombie_ptr;
}