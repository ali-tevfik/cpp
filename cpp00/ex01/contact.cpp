/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:47:42 by adoner        #+#    #+#                 */
/*   Updated: 2022/11/01 12:40:22 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//Constructor
CONTACT::CONTACT(void)
{	
    // std::cout << "Default Constructor called" << std::endl;
}

//Constructor ended
CONTACT::~CONTACT(void)
{
	// std::cout << "Destructor called" << std::endl;
}

bool CONTACT::emty_check(std::string data)
{
	if (data.find_first_not_of(" \t") != std::string::npos && !data.empty())
        return false;
    return true;
}

std::string CONTACT::check_data(std::string txt)
{
    std::string data;
    while(true)
    {
        std::cout << BLUE << txt << WHITE << std::endl;
        getline(std::cin, data);
        if (std::cin.eof())
            exit(1);
        else if (emty_check(data))
            std::cout << RED << "You can't input emty!" << WHITE << std::endl;
        else
            return (data); 
    }
}

//added new contact
CONTACT CONTACT::get_new_contact_info()
{
    CONTACT contact;
    std::cout << RED << "None of the fields can be empty" << WHITE << std::endl;
    
    contact.first_name = check_data("first name : ");
    contact.last_name = check_data("last name :");
    contact.phone_number = check_data("phone_number :");
    contact.darkest_secret = check_data("darkest_secret :");
    contact.nick_name = check_data("nick_name : ");
    
    
    return contact;
}