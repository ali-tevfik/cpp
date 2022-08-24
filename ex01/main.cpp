#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"


void print_menu()
{
    static const  char* txt = 
    "\t\t\t****************************************************\n"
    "\t\t\t*   HELLO WORLD!!!                                 *\n"
    "\t\t\t*   1)Add : Create new user!                       *\n"
    "\t\t\t*   2)Search : Find all information for user       *\n"
    "\t\t\t*   3)Exit : Exited program!                       *\n"
    "\t\t\t****************************************************\n";
    std::cout << txt << std::endl;
}

int main(void)
{   
    print_menu();
    PHONEBOOK phonebook;

    phonebook.add_new_user();
    phonebook.add_new_user();
    phonebook.show_user(phonebook);
    std::cout << phonebook.size << std::endl;
    std::cout<<std::endl;
    phonebook.show_user(phonebook);
}

//  The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.