#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    public :
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();

        void attack(const std::string &target);
        void whoAmI(void);
    private :
        std::string name;
};