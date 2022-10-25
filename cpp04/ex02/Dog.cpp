#include "Dog.hpp"


Dog::Dog(/* args */)
{
    std::cout << "[Dog] constructour called!" << std::endl;
    _type = "Dog";
    this->_brain = new Brain;
}
Dog::Dog(const Dog& dog)
{
    std::cout << "[Dog] copy constructour called!" << std::endl;
    *this = dog;
    this->_brain = new Brain;
    *(this->_brain) = *(dog._brain);
}

Dog::~Dog()
{
    std::cout << "[Dog] destructour called!" << std::endl;
    delete _brain;

}

void Dog::makeSound()const
{
    std::cout << "[Dog] braavv!!" << std::endl;
}