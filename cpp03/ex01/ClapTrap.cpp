#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
: _attack_damage(0), _hit_points(10), _energy_points(10) ,_name("") {
    std::cout << BLUE << "[ClapTrap] constructors called!" << WHITE << std::endl;
}
ClapTrap::ClapTrap(const std::string &name)
: _attack_damage(0), _hit_points(10), _energy_points(10), _name(name) {
    std::cout << BLUE << "[ClapTrap] constructors called!" << WHITE << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& claptrap)
{
    std::cout << BLUE  << "[ClapTrap] copy construcors called" << WHITE << std::endl;
    *this = claptrap;
}

ClapTrap::~ClapTrap()
{
    std::cout << BLUE  << "[ClapTrap] destructor called!" << WHITE << std::endl;
}



ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap )
{
    std::cout  << BLUE << "[ClapTrap] Copy assignment operator called"  << WHITE << std::endl;
    _name = claptrap.getName();
    _hit_points = claptrap.getHitPoints();
    _attack_damage = claptrap.getAttackDamage();
    _energy_points = claptrap.getEnergyPoints();
    return *this;
}




void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hit_points < amount)
    {
        std::cout << _name << " his no points amount is  " << amount << " hit point = " << _hit_points <<  std::endl;
        _hit_points = 0;
    }
    else
    {
        std::cout << "take damage : " << _name << " take " << amount << " point damage" << std::endl;
        _hit_points -= amount;
    }
}

void ClapTrap::beReparied(unsigned int amount)
{
    if (_hit_points == 0 || _energy_points == 0)
        std::cout << _name << " can't anything!"<<std::endl;
    else
    {
        _energy_points--;
        _hit_points += amount;
        std::cout << "berepaied " << _name << " take " << amount << std::endl; 
    }
    std::cout << "beReparied called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy_points == 0)
        std::cout << _name << " cant anything(energy emtpy!)." << std::endl;
    else
    {
        _energy_points--;
        std::cout << _name << " " << target << " , causing "<< _attack_damage << " points of damage!"<<std::endl;
    }
}

unsigned int ClapTrap::getAttackDamage()const{return _attack_damage;};
unsigned int ClapTrap::getEnergyPoints()const{return _energy_points;};
const std::string& ClapTrap::getName()const{return _name;};
unsigned int ClapTrap::getHitPoints()const{return _hit_points;};


// Overload insertion operator
std::ostream& operator<<(std::ostream& os, const ClapTrap &claptrap) {
	std::cout << "name: " << claptrap.getName() << std::endl;
	std::cout << "hit_points: " << claptrap.getHitPoints() << std::endl;
	std::cout << "energy_points: " << claptrap.getEnergyPoints() << std::endl;
	std::cout << "attack_damage: " << claptrap.getAttackDamage() << std::endl;

	return os;
}