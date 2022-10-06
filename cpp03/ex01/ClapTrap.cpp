#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */) 
{
    this->_attack_damage = attack_damage;
    this->_hit_points = hit_points;
    this->_energy_points = Energy_points;
    this->name = "";
    std::cout << "constructors called!" << std::endl;
}
ClapTrap::ClapTrap(const std::string &name) 
{

    this->_attack_damage = attack_damage;
    this->_hit_points = hit_points;
    this->_energy_points = Energy_points;
    this->name = name;
    std::cout << "constructors called!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& claptrap)
{
    std::cout << "copy construcors called" << std::endl;
    *this = claptrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called!" << std::endl;
}



ClapTrap& ClapTrap::operator=(ClapTrap& claptrap )
{
    std::cout  << "Copy assignment operator called"  << std::endl;
    this->name = claptrap.getName();
    this->hit_points = claptrap.getHitPoints();
    this->attack_damage = claptrap.getAttackDamage();
    this->Energy_points = claptrap.getEnergyPoints();
    return *this;
}




void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hit_points < amount)
    {
        std::cout << name << " his no points amount is  " << amount << " hit point = " << hit_points <<  std::endl;
        this->hit_points = 0;
    }
    else
    {
        std::cout << "take damage : " << name << " take " << amount << " point damage" << std::endl;
        this->hit_points -= amount;
    }
}

void ClapTrap::beReparied(unsigned int amount)
{
    if (this->hit_points == 0 || this->Energy_points == 0)
        std::cout << name << " can't anything!"<<std::endl;
    else
    {
        this->Energy_points--;
        this->hit_points += amount;
        std::cout << "berepaied " << name << " take " << amount << std::endl; 
    }
    std::cout << "beReparied called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->Energy_points == 0)
        std::cout << name << " cant anything(energy emtpy!)." << std::endl;
    else
    {
        this->Energy_points--;
        std::cout << this->name << " " << target << " , causing "<< this->attack_damage << " points of damage!"<<std::endl;
    }
}

unsigned int ClapTrap::getAttackDamage(){return this->attack_damage;};
unsigned int ClapTrap::getEnergyPoints(){return this->Energy_points;};
const std::string& ClapTrap::getName(){return this->name;};
unsigned int ClapTrap::getHitPoints(){return this->hit_points;};
