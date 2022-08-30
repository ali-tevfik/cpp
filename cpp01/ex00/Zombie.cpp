#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << YELLOW << name + " zombie was born"<<std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << RED << this->name + " zombie was destroyed." << std::endl;
	return; 
}
void Zombie::announce(void)
{
    std::cout << BLUE << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
