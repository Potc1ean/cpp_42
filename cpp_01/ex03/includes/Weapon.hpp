#ifndef __WEAPON__
# define __WEAPON__

# include <iostream>
# include <string>

class Weapon {
    public :
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        const std::string& getType() const;
        void setType(std::string type);

    private :
        std::string type;
};

# endif