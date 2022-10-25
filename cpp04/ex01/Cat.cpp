#include "Cat.hpp"


Cat::Cat(/* args */)
{
    std::cout << "[Cat] constructer called!" << std::endl;
    _type = "Cat";
    this->_brain = new Brain;
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
    delete _brain;
}

void Cat::makeSound() const
{
    std::cout << "[Cat] miyavvv!!" << std::endl;
}