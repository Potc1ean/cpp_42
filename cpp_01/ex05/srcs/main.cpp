#include "../includes/Harl.hpp"

int main()
{
    Harl harl;

    std::cout << "DEBUG :" << std::endl;
    harl.complain("DEBUG");
    std::cout << "DEBUG :" << std::endl;
    harl.complain("INFO");
    std::cout << "DEBUG :" << std::endl;
    harl.complain("WARNING");
    std::cout << "DEBUG :" << std::endl;
    harl.complain("ERROR");
    return 0;
}

