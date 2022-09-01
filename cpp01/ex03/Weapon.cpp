#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    this->weapon = weapon;
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string weapon)
{
    this->weapon = weapon;
}
const std::string  Weapon::getType(void){
    return this->weapon;
}
