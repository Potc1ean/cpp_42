#ifndef __CONTACT__
# define __CONTACT__

# include <iostream>
# include <string>

class Contact {

    public :
        Contact(void);
        ~Contact(void);

        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_number(void) const;
        std::string get_secret(void) const;

        void        set_first_name(std::string string);
        void        set_last_name(std::string string);
        void        set_nickname(std::string string);
        void        set_phone_number(std::string string);
        void        set_secret(std::string string);

    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
};

#endif
