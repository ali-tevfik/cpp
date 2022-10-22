#include "Dog.hpp"


Dog::Dog(/* args */)
{
    _type = "Dog";
    this->_brain = new Brain;
    std::cout << "[Dog] constructour called!" << std::endl;
}
Dog::Dog(const Dog& dog)
{
    std::cout << "[Dog] copy constructour called!" << std::endl;
    *this = dog;
    *this->_brain = new Brain;
    *(this->_brain) = *(dog->_brain);
}

Dog::~Dog()
{
    std::cout << "[Dog] destructour called!" << std::endl;

}

void Dog::makeSound()const
{
    std::cout << "[Dog] braavv!!" << std::endl;
}