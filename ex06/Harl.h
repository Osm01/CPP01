
#ifndef CPP01_HARL_H
#define CPP01_HARL_H

#include <iostream>

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PURPLE "\033[35m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

class Harl {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl(void);
	void harlFilter(std::string level);
	~Harl(void);
};


#endif //CPP01_HARL_H
