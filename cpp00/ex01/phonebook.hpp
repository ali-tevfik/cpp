#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>

class PHONEBOOK
{
private:
  /* data */
public:
  PHONEBOOK(/* args */);
  ~PHONEBOOK();
  void add_new_user();
  CONTACT contact[8];
  void show_user(PHONEBOOK& phonebook);
  int size;
};

#endif