
#ifndef __CLAPTRAP__
# define __CLAPTRAP__

# include <iostream>
# include <string> 

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap& other);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap& rhs);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    
protected:
    std::string name;
    int hp;
    int energy;
    int attackDamage;
};

# endif