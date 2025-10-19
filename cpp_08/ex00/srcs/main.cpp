#include <easyfind.hpp>

int main( void ) {
    try {
        std::vector<int> v;
        v.push_back(10);
        v.push_back(20);
        v.push_back(30);

        std::vector<int>::iterator it_vec = easyfind(v, 20);
        std::cout << "Found in vector: " << *it_vec << std::endl;

        std::list<int> l;
        l.push_back(5);
        l.push_back(15);
        l.push_back(25);

        std::list<int>::iterator it_list = easyfind(l, 15);
        std::cout << "Found in list: " << *it_list << std::endl;

        easyfind(v, 100);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    
    return 0;
}
