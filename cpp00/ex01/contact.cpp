#include "Contact.hpp"

//Constructor
CONTACT::CONTACT(void)
{
}

//Constructor ended
CONTACT::~CONTACT(void)
{
}

//added new contact
CONTACT CONTACT::get_new_contact_info()
{
    CONTACT contact;
    std::cout << "fisrt name :" << std::endl;
    std::cin >> contact.first_name;
    std::cout << "last name :" << std::endl;
    std::cin >> contact.last_name;
    std::cout << "phone_number :" << std::endl;
    std::cin >> contact.phone_number;
    std::cout << "darkest_secret :" << std::endl;
    std::cin >> contact.darkest_secret;
    std::cout << "nick_name :" << std::endl;
    std::cin >> contact.nick_name;
    return contact;
}