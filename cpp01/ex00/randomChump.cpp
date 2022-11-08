#include "Zombie.hpp"

void randomChump(const std::string &name) {
    Zombie Zombie(name);
    Zombie.announce();
}
