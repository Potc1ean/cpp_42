#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
        : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
        : ClapTrap(name)
{
    std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->hp = 100;
	this->energy = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
        : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name <<" is destroyed." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << this->name;
    if (attackDamage < 1)
        std::cout << " dosn't have dommage attack." << std::endl;
    else if (energy < 1)
        std::cout << " has no energy." << std::endl;
    else
        std::cout << " puts " << attackDamage << " on " << target << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}