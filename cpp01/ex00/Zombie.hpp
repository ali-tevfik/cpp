#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

//library
#include <iostream>

//color
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[0;33m"


class Zombie
{
private:
  std::string _name;
public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie();

    void announce(void);
};

//function
Zombie* newZombie( std::string name );
void randomChump(const std::string &name);

#endif
