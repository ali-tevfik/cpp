#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string weapon;
public:
    Weapon(const std::string weapon);
    ~Weapon();
    void setType(const std::string weapon);
    const std::string& getType(void)const;
};
#endif