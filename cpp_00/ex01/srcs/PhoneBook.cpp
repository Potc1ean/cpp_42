#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    std::cout << "PhoneBook is created !" << std::endl;
}

std::string PhoneBook::truncate(std::string str)
{
	if (str.size() >= 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void PhoneBook::add_contact()
{
    std::vector<std::string> infos(4);

    std::cout << "enter the fst name of you contact :" << "\n";
    std::cin >> infos[0]; 
    std::cout << "enter the last name of your contact :" << "\n";
    std::cin >> infos[1];
    std::cout << "Enter the nickname of your contact :" << "\n";
    std::cin >> infos[2];
    std::cout << "Enter the phone number of your conctact : (with no spaces)" << "\n";
    std::cin >> infos[3];
    if (phone_book.size() == 8)
        phone_book.erase(phone_book.begin());
    phone_book.push_back(infos);
    std::cout << "The contact is added !" << std::endl;
}

void PhoneBook::search_contact()
{
    std::string tmp;
    size_t index;

    if (phone_book.size() < 1) {
        std::cout<< "The phone book is empty !" << std::endl;
        return ;
    }
    for (size_t i = 0; i + 1 <= phone_book.size(); ++i) {
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << truncate(phone_book[i].get_first_name());
		std::cout << "|" << std::setw(10) << truncate(phone_book[i].get_last_name());
		std::cout << "|" << std::setw(10) << truncate(phone_book[i].get_nickname()) << "|" << std::endl;
    }
    std::cout << "Enter a index of contact :" << '\n';
    std::cin >> index;
    if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else if (index < 1 || index > phone_book.size()) {
        std::cout << "Your index don't exist ! "<< std::endl;
        return ;
    } else {
        index--;
        std::cout << phone_book[index].get_first_name() << '\n';
        std::cout << phone_book[index].get_last_name() << '\n';
        std::cout << phone_book[index].get_nickname() << '\n';
        std::cout << phone_book[index].get_phone_number() << std::endl;
    } 
}