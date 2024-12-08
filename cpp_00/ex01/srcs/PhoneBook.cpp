#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    std::cout << "PhoneBook is created !" << std::endl;
}

PhoneBook::~PhoneBook()
{
    std::cout << "PhoneBook default destructeur called !" << std::endl;
}

void PhoneBook::add_contact()
{
	std::string	str;

	str = "";
	if (this->index > 7)
		std::cout << "Warning: overwriting info about " << this->phone_book[this->index % 8].get_first_name() << std::endl;
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter a first name: ";
		if (std::getline(std::cin, str) && str != "")
			this->phone_book[this->index % 8].set_first_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->phone_book[this->index % 8].get_first_name() << "'s last name: ";
		if (std::getline(std::cin, str) && str != "")
			this->phone_book[this->index % 8].set_last_name(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->phone_book[this->index % 8].get_first_name() << "'s nickname: "; 
		if (std::getline(std::cin, str) && str != "")
			this->phone_book[this->index % 8].set_nickname(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->phone_book[this->index % 8].get_first_name() << "'s phone number: ";
		if (std::getline(std::cin, str) && str != "")
			this->phone_book[this->index % 8].set_phone_number(str);
	}
	str = "";
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter " << this->phone_book[this->index % 8].get_first_name() << "'s darkest secret: ";
		if (std::getline(std::cin, str) && str != "")
		{
			this->phone_book[this->index % 8].set_secret(str);
			std::cout << this->phone_book[this->index % 8].get_first_name() << \
				" successfully added to phonebook [" << this->index % 8 + 1 << "/8]" << std::endl;
		}
	}
	this->index++;
}

std::string PhoneBook::truncate(const std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::search_contact()
{
    int choice;

    if (index < 1) {
        std::cout<< "The phone book is empty !" << std::endl;
        return ;
    }
    for (int i = 0; i < index && i < 8; ++i) {
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(phone_book[i].get_first_name());
		std::cout << "|" << std::setw(10) << truncate(phone_book[i].get_last_name());
		std::cout << "|" << std::setw(10) << truncate(phone_book[i].get_nickname()) << "|" << std::endl;
    }
    std::cout << "Enter a index of contact :" << '\n';
    std::cin >> choice;
    if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else if (choice < 1 || choice > index) {
        std::cout << "Your index don't exist ! "<< std::endl;
        return ;
    } else {
        choice--;
        std::cout << phone_book[choice].get_first_name() << '\n';
        std::cout << phone_book[choice].get_last_name() << '\n';
        std::cout << phone_book[choice].get_nickname() << '\n';
        std::cout << phone_book[choice].get_phone_number() << '\n';
        std::cout << phone_book[choice].get_secret() << std::endl;
    } 
}
