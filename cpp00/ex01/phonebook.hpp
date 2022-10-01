/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:47:52 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/01 17:47:54 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"
#include <string>

// TODO contact private
class PHONEBOOK
{
private:
  /* data */
public:
  PHONEBOOK(/* args */);
  ~PHONEBOOK();
  void add_new_user();
  CONTACT contact[8];
  void show_user(PHONEBOOK& phonebook);
  int size;
};

#endif