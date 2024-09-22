#ifndef __A__
# define __A__

# include "Weapon.hpp"


class HumanA {
    public :
        HumanA(std::string name, Weapon &weapon);
        void getName() const;
        ~HumanA();
        void attack();

    private :
        std::string name;
        Weapon *weapon;
};

# endif