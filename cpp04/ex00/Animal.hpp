#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
    /* data */
public:
    Animal(/* args */);
    ~Animal();
    void makeSound();
    const std::string getType();
protected:
    std::string _type;

Animal &operator=(const Animal& animal);
};




#endif