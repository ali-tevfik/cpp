#include "Cat.hpp"


Cat::Cat(/* args */)
{
    std::cout << "[Cat] constructer called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "[Cat] destructur called!" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "[Dog] miyavvv!!" << std::endl;
}