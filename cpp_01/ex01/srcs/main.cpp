#include "../includes/Zombie.hpp"

int main()
{
    int z_nb = 3;
    Zombie *horde = zombieHorde(z_nb, "Charles");
    for (int i = 0; i < z_nb; ++i)
        horde[i].announce();
    delete[] horde;
    return 0;
}