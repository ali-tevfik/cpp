#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(const std::string type);
    Weapon(void);
    ~Weapon();
    
    void setType(const std::string type);
    const std::string& getType(void)const;
};
#endif
