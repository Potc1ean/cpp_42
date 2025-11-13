#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    PmergeMe sorter;
    if (!sorter.parseArgs(argc, argv))
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    sorter.sortAndDisplay();
    return 0;
}
