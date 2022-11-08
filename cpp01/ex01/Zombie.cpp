#include "Zombie.hpp"


Zombie::Zombie()
{
    std::cout << YELLOW << "A zombie was born"<<std::endl;
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

void Zombie::set_Name(const std::string name)
{
    _name = name;
}
