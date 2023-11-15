
#ifndef CPP01_ZOMBIE_H
# define CPP01_ZOMBIE_H

# include <iostream>
# define RED "\033[31m"
# define GREEN "\033[32m"
# define RESET "\033[0m"

class Zombie
{
private:
    std::string name;
public:
    Zombie(void);
    Zombie(std::string name);
    void    announce( void );
    Zombie* newZombie( std::string name );
    void    randomChump( std::string name );
    ~Zombie();
};


#endif //CPP01_ZOMBIE_H
