#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main()
{
    ScavTrap john("John");

	john.attack("Le gros mechant");
	john.takeDamage(120);
	john.beRepaired(50);
	john.guardGate();

    return 0;
}