#include "phonebook.hpp"


PHONEBOOK::PHONEBOOK(/* args */)
{
    this->size = 0;
}

PHONEBOOK::~PHONEBOOK()
{
}

void PHONEBOOK::add_new_user()
{
    CONTACT contact;
    contact = contact.get_new_user_info();
    if (this->size == 8)
      this->contact[7] = contact;
    else
    {
      this->contact[this->size] = contact;
      this->size++;
    }
}

void print_space(int len)
{
   for (int i = 0; i < len; i++)
      std::cout << " ";
}

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

void all_info(CONTACT& contact)
{
  std::cout << contact.first_name + " " + contact.last_name +" " +  contact.nick_name + " " + contact.phone_number + " " + contact.darkest_secret << std::endl;
}

void PHONEBOOK::show_user(PHONEBOOK& phonebok)
{
  std::string index;
  std::cout << "--------------------------------------------" << std::endl;
  std::cout << "| index   |first name|last name |nickname  |"<<std::endl;
  std::cout << "--------------------------------------------" << std::endl;
  for (int i = 0; i < this->size; i++)
  {
    std::cout << "|";
    print_user_info(std::to_string(i + 1));
    print_user_info(phonebok.contact[i].first_name);
    print_user_info(phonebok.contact[i].last_name);
    print_user_info(phonebok.contact[i].nick_name);
  std::cout << std::endl << "--------------------------------------------" << std::endl;
  }
  std::cout << std::endl << "Please kies index number!"<<std::endl;
  std::cin >> index;
  if (std::stoi(index) < this->size + 1)
    all_info(phonebok.contact[std::stoi(index)]);
  else
    std::cout << "wrong index!!!"<<std::endl;
}