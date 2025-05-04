#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
            : ClapTrap("default_clap_name")
{
    this->name = "default";
    this->hp = FragTrap::hp;
    this->energy = ScavTrap::energy;
    this->attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->hp = FragTrap::hp;
	this->energy = ScavTrap::energy;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << this->name << " constructor's called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << this->name << " deconstructor's called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My DiamondTrap is " << this->name <<" and my ClapTrap is " << ClapTrap::name << "." << std::endl;
}