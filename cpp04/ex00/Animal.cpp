#include "Animal.hpp"


Animal::Animal(/* args */)
{
    std::cout << "[Animal] constructer called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "[Animal] destructour called!" << std::endl;
}


void Animal::makeSound()
{
    std::cout << "The animal make a sound!" << std::endl;
}
const std::string Animal::getType()
{
    return _type;
}
Animal & Animal::operator=(const Animal& animal)
{
    this->_type = animal._type;
}