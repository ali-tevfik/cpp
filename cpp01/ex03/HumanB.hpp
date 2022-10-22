#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"


// TODO human b weapon * olcak 
// TODO human a weapon &
//human b silahsiz yani point edicek wyh? he will use it outside of the function so wee need to point it
//human a silahli yani copy edicek

class HumanB
{
private:
    const std::string _name;
    const Weapon *_weapon;
public:
    HumanB(const std::string name);
    void setWeapon(Weapon &weapon);
    ~HumanB();
    void attack()const;

};


#endif