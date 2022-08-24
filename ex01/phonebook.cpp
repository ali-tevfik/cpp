#include "phonebook.hpp"


PHONEBOOK::PHONEBOOK(/* args */)
{
    this->size = 0;
}

PHONEBOOK::~PHONEBOOK()
{
}

void PHONEBOOK::add_new_user()
{
    CONTACT contact;
    contact = contact.get_new_user_info();
    this->contact[this->size] = contact;
}
