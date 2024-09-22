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

        void add_contact();
        void search_contact();

    private:
        std::vector<Contact> phone_book;

        std::string truncate(std::string str);
};


#endif