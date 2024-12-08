#ifndef __PHONEBOOK__
 #define __PHONEBOOK__

 #include "Contact.hpp"

# include <iostream>
# include <string>
# include <vector>
# include <cstdlib>
# include <limits>
# include <iomanip>

class PhoneBook {

    public:
        PhoneBook();
        ~PhoneBook();

        void add_contact();
        void search_contact();

    private:
        int index;
        Contact phone_book[8];

        std::string truncate(const std::string str);
};

#endif