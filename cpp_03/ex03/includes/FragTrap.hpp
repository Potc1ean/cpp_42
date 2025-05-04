#ifndef __FRAGTRAP__
# define __FRAGTRAP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap& other);
    ~FragTrap();

    FragTrap& operator=(const FragTrap& rhs);

    void attack(const std::string& target);
    void highFivesGuys(void);
};

#endif
