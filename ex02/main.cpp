#include <iostream>
#define RED "\033[31m"
#define RESET "\033[0m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
int main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "The memory address of the string variable : " <<  RED << &str <<  RESET << std::endl;
	std::cout << "The memory address held by stringPTR : " <<  RED << stringPTR <<  RESET << std::endl;
	std::cout << "The memory address held by stringREF : " << RED << &stringREF << RESET << std::endl;

	std::cout << YELLOW << "=======================================================\n" << RESET;

	std::cout << "The value of the string variable : " << GREEN <<str << RESET << std::endl;
	std::cout << "The value pointed to by stringPTR : " << GREEN << *stringPTR << RESET << std::endl;
	std::cout << "The value pointed to by stringREF : " << GREEN <<stringREF << RESET << std::endl;

	return (0);
}