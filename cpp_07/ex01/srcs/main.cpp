#include <iter.hpp>

void printInt(int &n) {
    std::cout << "the number is : " << n << std::endl;
}

void printString(std::string &str) {
    std::cout << "the string value are : " << str << std::endl;
}

void printIntConst(int const &n) {
    std::cout << "the const number is : " << n << std::endl;
}

int main( void ) {
    const int lenStrArray = 2;
    const int lenIntArray = 3;
    const int lenIntConstArray = 3;

    std::string a = "ilia";
    std::string b = "kuzko";
    
    int x = 12;
    int y = 42;
    int z = 17;

    std::string StrArray[lenStrArray];
    int         IntArray[lenIntArray];

    const int intConstArray[] = {4, 5, 6};

    StrArray[0] = a;
    StrArray[1] = b;
    IntArray[0] = x;
    IntArray[1] = y;
    IntArray[2] = z;

    iter(StrArray, lenStrArray, printString);
    std::cout << "-----------------------" << std::endl;
    iter(IntArray, lenIntArray, printInt);
    std::cout << "-----------------------" << std::endl;
    iter(intConstArray, lenIntConstArray, printIntConst);

    return 0;
}
