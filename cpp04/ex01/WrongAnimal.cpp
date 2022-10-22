#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
    std::cout << "[WrongAnimal] constructer called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[WrongAnimal] destructour called!" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "The WrongAnimal make a sound!" << std::endl;
}
const std::string& WrongAnimal::getType()const
{
    return _type;
}
WrongAnimal & WrongAnimal::operator=(const WrongAnimal& wronganimal)
{
    this->_type = wronganimal._type;
    return *this;
}