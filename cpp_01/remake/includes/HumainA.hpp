#pragma once

#include "Weapon.hpp"

class HumainA {
    public:
        HumainA(std::string name, Weapon &weapon);
        ~HumainA();
        void attack();
    private:
        std::string name;
        Weapon* weapon;
};