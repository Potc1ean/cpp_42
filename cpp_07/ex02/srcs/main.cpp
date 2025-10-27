#include <Array.hpp>

int main( void ) {
    Array<int> r1;
    try {
        std::cout << r1[0] << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << "-----------------------" << std::endl;
    Array<int> r2(3);
    r2[0] = 42;
    r2[1] = 2;
    std::cout << "r2[0] value :" << r2[0] << std::endl;
    std::cout << "r2[1] value :" << r2[1] << std::endl;
    std::cout << "r2[2] value :" << r2[2] << std::endl;
    std::cout << "-----------------------" << std::endl;
    Array<int> r3(r2);
    r3[2] = 12;
    std::cout << "r3[0] value :" << r3[0] << std::endl;
    std::cout << "r3[1] value :" << r3[1] << std::endl;
    std::cout << "r3[2] value :" << r3[2] << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Assign r3 to r1 :" << std::endl;
    r1 = r3;
    std::cout << "r1[0] value :" << r1[0] << std::endl;
    std::cout << "r1[1] value :" << r1[1] << std::endl;
    std::cout << "r1[2] value :" << r1[2] << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "//End of the project thx for correction//" << std::endl;
}
