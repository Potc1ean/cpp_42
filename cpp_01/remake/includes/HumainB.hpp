#pragma once

#include "Weapon.hpp"

class HumainB {
    public:
        HumainB(std::string name);
        ~HumainB();
        void setWeapon(Weapon &w);
        void attack();
    private:
        std::string name;
        Weapon* weapon;
};