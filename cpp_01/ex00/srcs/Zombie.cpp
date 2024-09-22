#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string n)
{
    this->name = n;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is deleted... ..." << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}