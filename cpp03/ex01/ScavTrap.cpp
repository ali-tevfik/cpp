#include "ScavTrap.hpp"


ScavTrap::ScavTrap(/* args */) : ClapTrap() {
    std::cout << YELLOW << "[ScavTrap] constructor called!" << WHITE << std::endl;;
    this->_attack_damage = 20;
    this->_energy_points = 50;
    this->_hit_points = 100;
}

ScavTrap::ScavTrap(const std::string name) :ClapTrap(name)
{
    std::cout << YELLOW << "[ScavTrap] copy constructor called!" << WHITE << std::endl;;

    this->_attack_damage = 20;
    this->_energy_points = 50;
    this->_hit_points = 100;
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

 ScavTrap& ScavTrap::operator=( const ScavTrap& scavtrap ){
    
    ClapTrap::operator=(scavtrap);
    return *this;
 }

void ScavTrap::guardGate( void ) {
    if (this->_hit_points == 0)
        std::cout << YELLOW << _name << " is dead, can't be in gate keeper mode." << WHITE << std::endl;
    else
        std::cout << YELLOW << _name << " is in gatekeeper mode " << WHITE << std::endl;
}
