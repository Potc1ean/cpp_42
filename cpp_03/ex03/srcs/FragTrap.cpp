#include "../includes/FragTrap.hpp"

FragTrap::FragTrap()
        : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
        : ClapTrap(name)
{
    std::cout << "FragTrap " << name << " constructor called" << std::endl;
	this->hp = 100;
	this->energy = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
        : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name <<" is destroyed." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &rhs)
{
    ClapTrap::operator=(rhs);
    return *this;
}

void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << this->name;
    if (attackDamage < 1)
        std::cout << " dosn't have dommage attack." << std::endl;
    else if (energy < 1)
        std::cout << " has no energy." << std::endl;
    else
        std::cout << " puts " << attackDamage << " on " << target << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " make a high fives." << std::endl;
}