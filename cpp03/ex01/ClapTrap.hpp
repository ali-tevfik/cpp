#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


class ClapTrap
{
private:
   std::string name;
   unsigned int hit_points = 100;
   unsigned int Energy_points = 50;
   unsigned int attack_damage =20;
   unsigned int _hit_points;
   unsigned int _energy_points;
   unsigned int _attack_damage;
public:
    ClapTrap(/* args */);
    ClapTrap(const std::string &name);
    ClapTrap(ClapTrap& claptrap);
    ClapTrap &operator=(ClapTrap& claptrap);
    ~ClapTrap();

    void attac(const std::string& target);
    void takeDamage(unsigned int amount);
    void beReparied(unsigned int amount);
    void attack(const std::string& target);

    const std::string& getName();
    unsigned int getHitPoints();
    unsigned int getEnergyPoints();
    unsigned int getAttackDamage();

};

#endif