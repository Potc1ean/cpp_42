#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int main()
{
    PhoneBook fst_book;
    std::string prompt;
    
    while (prompt.compare("EXIT") != 0)
    {
        std::cout << "Entrer \"ADD\", \"SEARCH\" or \"EXIT\" : " << std::endl;
        std::cin >> prompt;
        if (!prompt.compare("SEARCH"))
            fst_book.search_contact();
        else if (!prompt.compare("ADD"))
            fst_book.add_contact();
    }
    return 0;
}

