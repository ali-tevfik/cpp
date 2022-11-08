#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    const Weapon &_weapon;
    const std::string _name;
public:
    HumanA(const std::string name, const Weapon &weapon);
    ~HumanA();
    void attack()const;

};

#endif 
