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

        int arr[] = {1, 2, 3};
        const std::vector<int> const_l(arr, arr + 3);

        std::vector<int>::const_iterator it_const_vec = easyfind(const_l, 3);
        std::cout << "Found in const vector: " << *it_const_vec << std::endl;

        easyfind(v, 100);
    } catch (std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }   
    return 0;
}
