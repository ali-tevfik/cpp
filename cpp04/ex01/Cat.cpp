#include "Cat.hpp"


Cat::Cat(/* args */)
{
    _type = "Cat";
    this->_brain = new Brain;
    std::cout << "[Cat] constructer called!" << std::endl;
}
Cat::Cat(const Cat& cat)
{
    std::cout << "[Cat] copy constructer called!" << std::endl;
    *this = cat;
    this->_brain = new Brain;
    *(this->_brain) = *(cat._brain);
}

Brain *Cat::getBrain()const{
    return this->_brain;
}
Cat::~Cat()
{
    std::cout << "[Cat] destructur called!" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] miyavvv!!" << std::endl;
}