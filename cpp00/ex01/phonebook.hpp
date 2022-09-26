#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>

class PHONEBOOK
{
private:
  CONTACT contact[8];
public:
  PHONEBOOK(/* args */);
  ~PHONEBOOK();
  void add_new_user();
  void show_user(PHONEBOOK& phonebook);
  int size;
};

#endif