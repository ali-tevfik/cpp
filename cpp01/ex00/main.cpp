#include "Zombie.hpp"

int main(int argc, char **argv)
{
    if (argc != 1)
        return 0;
    Zombie *Zombie_heap =  newZombie("heap");
    Zombie_heap->announce();
    randomChump("RANDOM");
    delete Zombie_heap;
}