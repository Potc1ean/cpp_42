#include "../includes/Contact.hpp"

Contact::Contact(std::vector<std::string> infos)
{
    first_name = infos[0];
    last_name = infos[1];
    nickname = infos[2];
    phone_number = infos[3];
}

std::string Contact::get_first_name() const
{
    return first_name;
}

std::string Contact::get_last_name() const
{
    return last_name;
}

std::string Contact::get_nickname() const
{
    return nickname;
}

std::string Contact::get_phone_number() const
{
    return phone_number;
}