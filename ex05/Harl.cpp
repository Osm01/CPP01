
#include "Harl.h"

Harl::Harl(void)
{}

Harl::~Harl(void)
{
	std::cout << CYAN << "Calling the descructer !!" << RESET << std::endl;
}

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

void Harl::complain(std::string level)
{
	int	i;
	void (Harl::*h[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[] = {"debug", "info", "warning", "error"};

	i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break;
		i ++;
	}
	if (i == 4)
	{
		std::cout << RED << "No level can show !!!" << RESET << std::endl;
		return ;
	}
	(this->*h[i])();
}


