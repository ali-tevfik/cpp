#include <iostream>
#include <string>
#include "contact.hpp"
#include "phonebook.hpp"

void print_menu()
{
    static const  char* txt = 
    "\n\n****************************************************\n"
    "*   HELLO WORLD!!!                                 *\n"
    "*   1)Add : Create new user!                       *\n"
    "*   2)Search : Find all information for user       *\n"
    "*   3)Exit : Exited program!                       *\n"
    "****************************************************\n\n";
    std::cout << txt << std::endl;
}

std::string upper(std::string value)
{
    std::string upper_value;

   for (int x=0; x< value.length(); x++)
        value[x] = (char)toupper(value[x]);

    return value;
}

int main(void)
{   
    std::string value;
    
    PHONEBOOK phonebook;
    while (1)
    {
        print_menu();
        std::cin >> value;
        value = upper(value);
        if (value == "ADD")
            phonebook.add_new_user();
        else if (value == "SEARCH")
            phonebook.show_user(phonebook);
        else if (value == "EXIT")
            break;
        else
            std::cout << "giasdkasf";
    }
}

//  The contact fields are: first name, last name, nickname, phone number, and
// darkest secret. A saved contact can’t have empty fields.