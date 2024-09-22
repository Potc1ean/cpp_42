#ifndef __CONTACT__
# define __CONTACT__

# include <iostream>
# include <string>
# include <vector>

class Contact {

    public :
        Contact(std::vector<std::string> infos);

        std::string get_first_name() const;
        std::string get_last_name() const;
        std::string get_nickname() const;
        std::string get_phone_number() const;

    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
};

#endif