#include <iostream>
#include <string>
#include "contact.cpp"
#include "phonebook.cpp"


int main(void)
{   
    PHONEBOOK phonebook;

    phonebook.add_new_user();
}

//  The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.