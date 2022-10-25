#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *_brain;
public:
    Dog(/* args */);
    Dog(const Dog& dog);
    virtual ~Dog();
    virtual void makeSound()const;
    Brain *getBrain(void)const;
};


#endif