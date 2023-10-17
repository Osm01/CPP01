#include "Zombie.h"

int main() {
	int 	i = 0;
	int		N = 2;
	Zombie main_zombie("STACK1");
	main_zombie.announce();
    Zombie	*zombie_ptr;
	zombie_ptr = main_zombie.zombieHorde(N, "Oussama");
	while (i < N)
	{
		zombie_ptr[i ++].announce();
	}
	delete[] zombie_ptr;
	return 0;
}


