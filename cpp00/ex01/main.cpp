/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:48:17 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/01 17:48:18 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"

/*
Constructors
A constructor in C++ is a special method that is automatically called when an object of a class is created.

To create a constructor, use the same name as the class, followed by parentheses ():
*/

void print_menu()
{
    static const  char* txt = 
    "\n\n*****************************************************\n"
    "*   HELLO WORLD!!!                                  *\n"
    "*   1)Add : save a new contact                      *\n"
    "*   2)Search : display a specific contact           *\n"
    "*   3)Exit                                          *\n"
    "*****************************************************\n\n";
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
    while (1 && !std::cin.eof())
    {
        print_menu();
        //todo emtpy check
        std::getline(std::cin, value);
            value = upper(value);
            if (value == "ADD")
                phonebook.add_new_user();
            else if (value == "SEARCH")
                phonebook.show_user(phonebook);
            else if (value == "EXIT")
                break;
            else
                std::cout << "ONLY ADD-SEARCH-EXIT!!!";
    }
    return 0;
}