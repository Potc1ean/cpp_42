#ifndef __B__
# define __B__

# include "Weapon.hpp"


class HumanB {
    public :
        HumanB(std::string name);
        void getName() const;
        void setWeapon(Weapon &weapon);
        ~HumanB();
        void attack();

    private :
        std::string name;
        Weapon *weapon;
};

# endif