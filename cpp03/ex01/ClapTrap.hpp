#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>


# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
#define WHITE " \033[0;37m"

class ClapTrap
{
protected:
   std::string _name;
   unsigned int _hit_points;
   unsigned int _energy_points;
   unsigned int _attack_damage;
public:
    ClapTrap(/* args */);
    ClapTrap(const std::string &name);
    ClapTrap(ClapTrap& claptrap);
    ClapTrap &operator=(const ClapTrap& claptrap);
    ~ClapTrap();

    void attac(const std::string& target);
    void takeDamage(unsigned int amount);
    void beReparied(unsigned int amount);
    void attack(const std::string& target);

    const std::string& getName()const;
    unsigned int getHitPoints()const;
    unsigned int getEnergyPoints()const;
    unsigned int getAttackDamage()const;

};
std::ostream &operator<<( std::ostream &o, const ClapTrap &claptrap);

#endif