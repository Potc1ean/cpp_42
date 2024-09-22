#include "../includes/Zombie.hpp"

int main()
{
    Zombie z1("Charles");
    Zombie *z2 = newZombie("jacques");
    z1.announce();
	z2->announce();
	randomChump("Pascale");
	delete z2;
    return 0;
}

