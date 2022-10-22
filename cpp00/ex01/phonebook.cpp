/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:47:46 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/05 17:44:14 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

//Constructor
PHONEBOOK::PHONEBOOK(/* args */)
{
    this->size = 0;
}

//Constructor ended
PHONEBOOK::~PHONEBOOK()
{
}

//add new user. First get contact information and then check how many contact there have. if there are 8 contact replace last one and add.
void PHONEBOOK::add_new_user()
{
    CONTACT contact;
    contact = contact.get_new_contact_info();

    if (this->size == 8)
    {
      for (int i = 0; i < 7; i++)
        this->contact[i] = this->contact[i + 1];
      
      this->contact[7].first_name = contact.first_name;
      this->contact[7].last_name = contact.last_name;
      this->contact[7].darkest_secret = contact.darkest_secret;
      this->contact[7].nick_name = contact.nick_name;
      this->contact[7].phone_number = contact.phone_number;
    }
    else
    {
      this->contact[this->size] = contact;
      this->size++;
    }
}

//print right
void print_space(int len)
{
   for (int i = 0; i < len; i++)
      std::cout << " ";
}

//show all contact information
void print_user_info(std::string value)
{
  int len = 10;


  if (len < value.length())
  {
     for (int i = 0; i < 9; i++)
     {
       std::cout << value[i];
     }
     std::cout << ".";
  }
  else
  {
      print_space(len - value.length());
      std::cout << value;
  }
  std::cout << "|";
}

//show one contact all information
void all_info(CONTACT& contact)
{
  std::cout << "first name is : " + contact.first_name << std::endl;
  std::cout << "last name is : " + contact.last_name << std::endl;
  std::cout << "phone number is : " + contact.phone_number << std::endl;
  std::cout << "darkest secret is : " + contact.darkest_secret << std::endl;
  std::cout << "nickname is : " + contact.nick_name << std::endl;
}

//search
void PHONEBOOK::show_user(PHONEBOOK& phonebok)
{
  if (this->size == 0)
    std::cout << "Your phonebook is emty!!" << std::endl;
  else
  {
    std::string s_index;
    int i_index;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|";
    print_user_info("index");
    print_user_info("first name");
    print_user_info("last name");
    print_user_info("nickname");
    std::cout << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    for (int i = 0; i < this->size; i++)
    {
      std::cout << "|";
      print_user_info(std::to_string(i + 1));
      print_user_info(phonebok.contact[i].first_name);
      print_user_info(phonebok.contact[i].last_name);
      print_user_info(phonebok.contact[i].nick_name);
    std::cout << std::endl << "---------------------------------------------" << std::endl;
    }
    std::cout << std::endl << "Please select index number!"<<std::endl;
    std::getline(std::cin, s_index);
    try
    {
      i_index = std::stoi(s_index);
    }
    catch(const std::exception& e)
    {
      i_index = -1;
    }
    
    if (i_index < this->size + 1 && i_index != -1)
      all_info(phonebok.contact[i_index - 1]);
    else
      std::cout << "wrong index!!!"<<std::endl;
  }
}