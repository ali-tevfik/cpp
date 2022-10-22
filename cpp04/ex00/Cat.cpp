#include "Cat.hpp"


Cat::Cat(/* args */)
{
    _type = "Cat";
    std::cout << "[Cat] constructer called!" << std::endl;
}
Cat::Cat(const Cat& cat)
{
    std::cout << "[Cat] copy constructer called!" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
    std::cout << "[Cat] destructur called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] miyavvv!!" << std::endl;
}