#include "FragTrap.hpp"


FragTrap::FragTrap(/* args */) : ClapTrap() {
    std::cout << YELLOW << "[FragTrap] constructor called!" << WHITE << std::endl;;
    this->_attack_damage = 30;
    this->_energy_points = 100;
    this->_hit_points = 100;
}

FragTrap::FragTrap(const std::string name) :ClapTrap(name)
{
    std::cout << YELLOW << "[FragTrap] copy constructor called!" << WHITE << std::endl;;

    this->_attack_damage = 30;
    this->_energy_points = 100;
    this->_hit_points = 100;
}
FragTrap::FragTrap(const FragTrap& FragTrap)
{
    std::cout << YELLOW << "[FragTrap] copy constructor called!" << WHITE << std::endl;;

    *this = FragTrap;
}
FragTrap::~FragTrap()
{
    std::cout << YELLOW << "[FragTrap] destructor called!" << WHITE << std::endl; ;

}


 FragTrap& FragTrap::operator=( const FragTrap& FragTrap ){
    
    ClapTrap::operator=(FragTrap);
    return *this;
 }

void FragTrap::attack(const std::string& target)
{
    std::cout << GREY << "[FragTrap]Attack" << RESET;
    if (_energy_points == 0)
        std::cout << _name << " cant anything(hit points are not enough!)." << std::endl;
    else
    {
        _energy_points--;
        std::cout << _name << " => " << target << " , causing "<< _attack_damage << " points of damage!"<<std::endl;
    }
}

void FragTrap::highFivesGuys( void ) {
    if (this->_hit_points == 0)
        std::cout << YELLOW <<"[FragTrap] " << _name << " is dead, can't be in gate keeper mode." << WHITE << std::endl;
    else
        std::cout << YELLOW << "[FragTrap] " << _name << "  wants to high five  " << WHITE << std::endl;
}