#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <string>

class CONTACT
{
public:
    CONTACT(void);
   ~CONTACT(void);
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string nick_name;
    std::string darkest_secret;
    CONTACT get_new_contact_info();
};
  #endif