#include "WrongCat.hpp"


WrongCat::WrongCat(/* args */)
{
    _type = "WrongCat";
    std::cout << "[WrongCat] constructer called!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "[WrongCat] destructur called!" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "[WrongCat] miyavvv!!" << std::endl;
}