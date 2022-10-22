/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:47:42 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/19 20:27:46 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//TODO check spaces and ex00 delete no parametre line!
#include "Contact.hpp"

//Constructor
CONTACT::CONTACT(void)
{
}

//Constructor ended
CONTACT::~CONTACT(void)
{
}


//added new contact
CONTACT CONTACT::get_new_contact_info()
{
    CONTACT contact;
    std::cout << "None of the fields can be empty" << std::endl;
    std::cout << "fisrt name :" << std::endl;
    std::cin >> contact.first_name;
    std::cout << "last name :" << std::endl;
    std::cin >> contact.last_name;
    std::cout << "phone_number :" << std::endl;
    std::cin >> contact.phone_number;
    std::cout << "darkest_secret :" << std::endl;
    std::cin >> contact.darkest_secret;
    std::cout << "nick_name :" << std::endl;
    std::cin >> contact.nick_name;
    return contact;
}