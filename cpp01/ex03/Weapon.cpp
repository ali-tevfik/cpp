#include "Weapon.hpp"

Weapon::Weapon(const std::string weapon)
{
    this->weapon = weapon;
}

Weapon::~Weapon()
{
}

void Weapon::setType(const std::string weapon)
{
    this->weapon = weapon;
}
const std::string&  Weapon::getType(void)const {
    return this->weapon;
}
