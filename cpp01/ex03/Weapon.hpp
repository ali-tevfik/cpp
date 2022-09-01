#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string weapon;
public:
    Weapon(std::string weapon);
    ~Weapon();
    void setType(std::string weapon);
    const std::string getType(void);
};
#endif