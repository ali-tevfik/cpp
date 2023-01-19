#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
private:
    /* data */
public:
    ScavTrap(/* args */);
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap& scavtrap);
    ~ScavTrap();

    ScavTrap& operator=( const ScavTrap& scavtrap );
    
    void attack(const std::string& target);
     void guardGate();
};


#endif

// attack 20
// phit 100
//energy 50