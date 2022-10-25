#include "Animal.hpp"


Animal::Animal(/* args */)
{
    _type = "";
    std::cout << "[Animal] constructer called!" << std::endl;
}
Animal::Animal(const Animal& animal)
{
    std::cout << "[Animal] copy constructer called!" << std::endl;
    *this = animal;
}


Animal::~Animal()
{
    std::cout << "[Animal] destructour called!" << std::endl;
}


void Animal::makeSound() const
{
    std::cout << "The animal make a sound!" << std::endl;
}
const std::string& Animal::getType()const
{
    return _type;
}
Animal & Animal::operator=(const Animal& animal)
{
    this->_type = animal._type;
    return *this;
}