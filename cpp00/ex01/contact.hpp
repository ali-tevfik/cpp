/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:48:14 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/25 15:04:28 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP


#include <iostream>
#include <string>

//color
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[0;33m"
#define WHITE " \033[0;37m"

class CONTACT
{
  private:

public:
    CONTACT(void);
   ~CONTACT(void);
    std::string first_name;
    std::string last_name;
    std::string phone_number;
    std::string nick_name;
    std::string darkest_secret;
  
  CONTACT get_new_contact_info();
  std::string check_data(std::string txt);
  bool emty_check(std::string data);
};
  #endif