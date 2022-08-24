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
    if (this->size == 8)
      this->contact[7] = contact;
    else
    {
      this->contact[this->size] = contact;
      this->size++;
    }
}

void PHONEBOOK::show_user(PHONEBOOK& phonebok)
{
  
  for (int i = 0; i < this->size; i++)
  {
    std::cout << phonebok.contact[i].first_name << std::endl;
  }
  
}