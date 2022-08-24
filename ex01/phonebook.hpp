#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"
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
  int size;
};

#endif