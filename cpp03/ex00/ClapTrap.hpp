#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"


class ClapTrap
{
private:
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

    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void attack(const std::string& target);

    const std::string& getName()const;
    unsigned int getHitPoints()const;
    unsigned int getEnergyPoints()const;
    unsigned int getAttackDamage()const;

};
std::ostream &operator<<( std::ostream &o, const ClapTrap &claptrap);

#endif