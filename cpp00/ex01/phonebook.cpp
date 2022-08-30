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
  std::cout << "first name is : " + contact.first_name << std::endl;
  std::cout << "last name is : " + contact.last_name << std::endl;
  std::cout << "phone number is : " + contact.phone_number << std::endl;
  std::cout << "darkest secret is : " + contact.darkest_secret << std::endl;
  std::cout << "nickname is : " + contact.nick_name << std::endl;
}

void PHONEBOOK::show_user(PHONEBOOK& phonebok)
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
  std::cout << std::endl << "Please kies index number!"<<std::endl;
  std::cin >> s_index;
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