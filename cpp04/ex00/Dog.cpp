#include "Dog.hpp"


Dog::Dog(/* args */)
{
    std::cout << "[Dog] constructour called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "[Dog] destructour called!" << std::endl;

}

void Dog::makeSound()
{
    std::cout << "[Dog] braavv!!" << std::endl;
}