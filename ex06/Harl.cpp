
#include "Harl.h"

Harl::Harl(void)
{}

Harl::~Harl(void)
{}

void Harl::debug(void)
{
	std::cout << PURPLE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}

void Harl::info(void)
{
	std::cout << GREEN << "I cannot believe adding extra bacon costs more money. You didn’t put\n"
				 "enough bacon in my burger! If you did, I wouldn’t be asking for more!" <<  RESET << std::endl;
}

void Harl::warning(void)
{
	std::cout << YELLOW << "\"I think I deserve to have some extra bacon for free. I’ve been coming for\n"
				 "years whereas you started working here since last month." << RESET << std::endl;
}

void Harl::error(void)
{
	std::cout << BLUE << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

void Harl::harlFilter(std::string level)
{
	int	i;
	void (Harl::*h[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break;
		i ++;
	}
	if (i == 4)
		std::cout << RED << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
	else
	{
		switch (i) {
			case 0:
				std::cout << "[ " << levels[0] << " ]" << std::endl;
				(this->*h[0])();
			case 1:
				std::cout << "[ " << levels[1] << " ]" << std::endl;
				(this->*h[1])();
			case 2:
				std::cout << "[ " << levels[2] << " ]" << std::endl;
				(this->*h[2])();
			case 3:
				std::cout << "[ " << levels[3] << " ]" << std::endl;
				(this->*h[3])();
				break;
		}
	}
}


