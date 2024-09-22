#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
     : name("default"), hp(10), energy(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " is created." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
     : name(name), hp(10), energy(10), attackDamage(0)
{
    std::cout << "ClapTrap " << this->name << " is created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
	: name(other.name), hp(other.hp), energy(other.energy), attackDamage(other.attackDamage) 
{
	std::cout << "ClapTrap copy constructor called on " << other.name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
{
	this->name = rhs.name;
	this->hp = rhs.hp;
	this->energy = rhs.energy;
	this->attackDamage = rhs.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " was destroyed." << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->name;
    if (attackDamage < 1)
        std::cout << " dosn't have dommage attack." << std::endl;
    else if (energy < 1)
        std::cout << " has no energy." << std::endl;
    else
        std::cout << " puts " << attackDamage << " on " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name;
    std::cout << " has taking " << amount << " damage." << std::endl;
    this->hp -= amount;
    if (this->hp <= 0)
    {
        this->hp = 0;
        std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name;
    if (energy < 1)
        std::cout << " has no energy." << std::endl;
    else
    {
        std::cout << " repaired himself of " << amount << " hp." << std::endl;
        this->hp += amount;
        this->energy--;
    }
}