#ifndef __ZOMBIE__
# define __ZOMBIE__

#include <iostream>
#include <string>


class Zombie {

    public :
        Zombie();
        Zombie(std::string n);
        ~Zombie();
        void announce(void);

    private :
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

# endif