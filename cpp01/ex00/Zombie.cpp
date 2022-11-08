#include "Zombie.hpp"

Zombie::Zombie(void)
{
    _name = "";
    std::cout << YELLOW << _name + " zombie was born"<<std::endl;
    return ;
}

Zombie::Zombie(std::string name)
{
    _name = name;
    std::cout << YELLOW << _name + " zombie was born"<<std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << RED << _name + " zombie was destroyed." << std::endl;
	return; 
}
void Zombie::announce(void)
{
    std::cout << BLUE << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
