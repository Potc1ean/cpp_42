#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main()
{
	DiamondTrap test;
	std::cout << "-----------------------------" << std::endl;
	test.attack("La racaille");
	test.takeDamage(120);
	test.beRepaired(50);
	test.guardGate();
	test.highFivesGuys();
	test.whoAmI();
	std::cout << "-----------------------------" << std::endl;
	DiamondTrap Bogoce("Bogoce");
	Bogoce.whoAmI();
	std::cout << "-----------------------------" << std::endl;
	
    return 0;
}