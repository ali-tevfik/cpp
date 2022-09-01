#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->weapon = &weapon;
    // std::cout << " asd " << weapon << " extra " << &this->weapon << std::endl; 
    this->name = name;
}

HumanA::~HumanA()
{
}


void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;  
}


// HumanA and HumanB are almost the same except for these two tiny details:
// • While HumanA takes the Weapon in its constructor, HumanB doesn’t.  **humanb const olmicak
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.// humanb silah bazen olmayabilir

// <name> attacks with their <weapon type>