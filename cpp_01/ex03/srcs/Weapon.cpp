#include "../includes/Weapon.hpp"

Weapon::Weapon() {
    std::cout << "weapon is created." << std::endl;
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon() {
    if (type.length())
        std::cout << "Weapon " << type << " is deleted." << std::endl;
    else 
        std::cout << "Weapon is deleted." << std::endl;
}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(std::string type)
{
    this->type = type;
}
