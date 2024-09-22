#ifndef __SCAVTRAP__
# define __SCAVTRAP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& other);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap& rhs);

    void attack(const std::string& target);
    void guardGate();
};

#endif