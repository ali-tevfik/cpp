#include "Zombie.hpp"

int main()
{
    Zombie Zombie_stack("Stack");
    Zombie_stack.announce();
    
    Zombie *Zombie_heap =  newZombie("heap");
    Zombie_heap->announce();
    randomChump("RANDOM");
    delete Zombie_heap;
}