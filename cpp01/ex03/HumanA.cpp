#include "HumanA.hpp"

HumanA::HumanA(const std::string name, const Weapon &weapon)
:  _weapon(weapon) ,_name(name) {

}


HumanA::~HumanA()
{
}


void HumanA::attack() const
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;  
}


// HumanA and HumanB are almost the same except for these two tiny details:
// • While HumanA takes the Weapon in its constructor, HumanB doesn’t.  **humanb const olmicak
// • HumanB may not always have a Weapon, whereas HumanA will always be armed.// humanb silah bazen olmayabilir

// <name> attacks with their <weapon type>
