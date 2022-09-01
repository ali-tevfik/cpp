#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = nullptr;
}

HumanB::~HumanB()
{
}                 

void HumanB::attack()
{
    if (weapon)
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;  
    else
        std::cout << this->name << " attacks no weapon " << std::endl;  
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}