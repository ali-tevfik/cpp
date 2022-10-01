/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:48:14 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/01 17:48:15 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <string>

class CONTACT
{
  private:

public:
    CONTACT(void);
    CONTACT get_new_contact_info();
   ~CONTACT(void);
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string nick_name;
    std::string darkest_secret;
};
  #endif