#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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
    Zombie();
    ~Zombie();
    
    void announce(void);
    void set_Name(const std::string name);
    
};

Zombie* zombieHorde( int N, std::string name );

#endif
