#ifndef __ZOMBIE_
# define __ZOMBIE__

# include <iostream>
# include <string>

class Zombie {

    public :
        Zombie(std::string n);
        ~Zombie();
        void announce(void);

    private :
        std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

# endif