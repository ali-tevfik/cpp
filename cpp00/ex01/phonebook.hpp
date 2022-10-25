/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:47:52 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/25 14:59:49 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>


//color
#define RED  	"\033[31m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[0;33m"
#define WHITE " \033[0;37m"


class PHONEBOOK
{
private:
  CONTACT contact[8];
public:
  PHONEBOOK(/* args */);
  ~PHONEBOOK();
  void add_new_user();
  void show_user(PHONEBOOK& phonebook);
  int size;
void print_space(int len);
void print_user_info(std::string value);
void all_info(CONTACT& contact);

};

#endif