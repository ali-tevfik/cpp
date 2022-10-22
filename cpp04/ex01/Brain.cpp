#include "Brain.hpp"


Brain::Brain(/* args */)
{
    std::cout << "[Brain] constructer called!" << std::endl;
    for (int i = 0; i < 100; i++)
        _idea[i] = "is idea";
}
Brain::Brain(const Brain& brain)
{
    std::cout << "[Brain] copy constructer called!" << std::endl;
    
    for (int i = 0; i < 100; i++)
        this->_idea[i] = brain.get_ideas(i);
}

Brain::~Brain()
{
    std::cout << "[Brain] destroyed called!" << std::endl;
}
const std::string& Brain::get_ideas(int i)const
{
    return _idea[i];
}


Brain & Brain::operator=(const Brain& brain)
{
    for (int i = 0; i < 100; i++)
        this->_idea[i] = brain.get_ideas(i);
    return *this;
}
