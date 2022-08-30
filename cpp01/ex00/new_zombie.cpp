#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *new_zombie = new Zombie(name);
    if (!new_zombie)
        std::cout << "Failed!"<<std::endl;
    return new_zombie;
}