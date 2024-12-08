#include "../includes/Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string Contact::get_first_name(void) const
{
    return first_name;
}

std::string Contact::get_last_name(void) const
{
    return last_name;
}

std::string Contact::get_nickname(void) const
{
    return nickname;
}

std::string Contact::get_phone_number(void) const
{
    return phone_number;
}

std::string Contact::get_secret(void) const
{
    return darkest_secret;
}

void Contact::set_first_name(std::string string)
{
    this->first_name = string;
}

void Contact::set_last_name(std::string string)
{
    this->last_name = string;
}

void Contact::set_nickname(std::string string)
{
    this->nickname = string;
}

void Contact::set_phone_number(std::string string)
{
    this->phone_number = string;
}

void Contact::set_secret(std::string string)
{
    this->darkest_secret = string;
}
