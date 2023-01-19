#include "ScavTrap.hpp"


ScavTrap::ScavTrap(/* args */) {
    std::cout << YELLOW << "[ScavTrap] constructor called!" << WHITE << std::endl;;
    _attack_damage = 20;
    _energy_points = 50;
    _hit_points = 100;
}

ScavTrap::ScavTrap(const std::string name)
{
    std::cout << YELLOW << "[ScavTrap] copy constructor called!" << WHITE << std::endl;;
    _name = name;
    _attack_damage = 20;
    _energy_points = 50;
    _hit_points = 100;
}
ScavTrap::ScavTrap(const ScavTrap& scavtrap)
{
    std::cout << YELLOW << "[ScavTrap] copy constructor called!" << WHITE << std::endl;;

    *this = scavtrap;
}
ScavTrap::~ScavTrap()
{
    std::cout << YELLOW << "[ScavTrap] destructor called!" << WHITE << std::endl; ;

}


void ScavTrap::attack(const std::string& target)
{
    if (_energy_points == 0)
        std::cout << "[ScavTrap]"<< _name << " cant anything(energy emtpy!)." << std::endl;
    else
    {
        _energy_points--;
        std::cout << "[ScavTrap]  "<< _name << " => " << target << " , causing "<< _attack_damage << " points of damage!"<<std::endl;
    }
}

 ScavTrap& ScavTrap::operator=( const ScavTrap& scavtrap ){
    
    ClapTrap::operator=(scavtrap);
    return *this;
 }

void ScavTrap::guardGate( void ) {
    if (_hit_points == 0)
        std::cout  << YELLOW << "[ScavTrap]" << _name << " is dead, can't be in gate keeper mode." << WHITE << std::endl;
    else
        std::cout  << YELLOW << "[ScavTrap]" << _name << " is in gatekeeper mode " << WHITE << std::endl;
}
