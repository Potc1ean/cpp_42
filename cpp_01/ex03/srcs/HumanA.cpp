#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}

HumanA::~HumanA()
{
    std::cout << name << " is destroyed" << std::endl;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}