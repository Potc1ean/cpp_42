#pragma once

#include <iostream>
#include <string>

class Weapon {
    public:
        Weapon() {}
        Weapon(std::string type);
        ~Weapon() {}
        std::string getType();
        void setType(std::string t);

    private:
        std::string type;
};