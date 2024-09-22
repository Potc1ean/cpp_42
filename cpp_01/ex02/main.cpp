#include <iostream>
#include <string>

int main() {
    std::string msg = "HI THIS IS BRAIN";
    std::string *stringPTR = &msg;
    std::string &stringREF = msg;

    std::cout << "Memory address of the string variable: " << &msg << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "Value of the string variable: " << msg << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}