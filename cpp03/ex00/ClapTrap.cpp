#include "ClapTrap.hpp"

ClapTrap::ClapTrap(/* args */)
: _attack_damage(0), _hit_points(10), _energy_points(10) ,_name("") {
    std::cout << CYAN << "[ClapTrap]" << " constructors called!" << RESET << std::endl;
}
ClapTrap::ClapTrap(const std::string &name)
: _attack_damage(0), _hit_points(10), _energy_points(10), _name(name) {
    std::cout << CYAN << "[ClapTrap]" << " constructors called!" << RESET <<  std::endl;
}
ClapTrap::ClapTrap(ClapTrap& claptrap)
{
    std::cout << CYAN << "[ClapTrap]" << " copy construcors called" << RESET << std::endl;
    *this = claptrap;
}
ClapTrap::~ClapTrap()
{
    std::cout << CYAN << "[ClapTrap]" << " destructor called!" <<  RESET <<std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap )
{
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
        std::cout << "[takeDamage] " << _name << " his no points. Amount is  " << amount << ", hit point = " << _hit_points  << std::endl;
        _hit_points = 0;
    }
    else
    {
        std::cout << RED << "[takeDamage]  " << _name << " take " << amount << " point damage" << std::endl;
        _hit_points -= amount;
    }
}

void ClapTrap::beRepaired   (unsigned int amount)
{

    if (_hit_points == 0 || _energy_points == 0)
        std::cout<< "[beRepaired]" <<  _name  << " can't anything!" << std::endl;
    else
    {
        _energy_points--;
        _hit_points += amount;
        std::cout  << "berepaied " << _name << " take " << amount  << std::endl; 
    }
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy_points == 0)
        std::cout << "[Attack] " << _name << " cant anything(hit points are not enough!)." << std::endl;
    else
    {
        _energy_points--;
        std::cout << "[Attack] " << _name << " => " << target << " , causing "<< _attack_damage << " points of damage!"<<std::endl;
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