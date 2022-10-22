#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat(/* args */);
    Cat(const Cat& cat);
    ~Cat();
    
    void makeSound()const;
};







#endif