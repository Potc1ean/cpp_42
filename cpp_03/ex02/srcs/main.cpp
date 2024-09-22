#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
    ScavTrap john("John");
	FragTrap LeBron("LeBron");

	john.attack("Le gros mechant");
	john.takeDamage(120);
	john.beRepaired(50);
	john.guardGate();

	LeBron.attack("Le 2eme gros mechant");
	LeBron.takeDamage(70);
	LeBron.beRepaired(50);
	LeBron.highFivesGuys();

    return 0;
}