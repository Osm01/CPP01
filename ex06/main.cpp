
#include "Harl.h"

int main(int argc , char *argv[])
{
	if (argc != 2)
		std::cout << RED << "Error arg !!!" << std::endl;
	else
	{
		Harl harl;
		harl.harlFilter(argv[1]);
	}
	return (1);
}
