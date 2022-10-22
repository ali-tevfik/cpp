#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>


#define CYAN	"\033[36m"
#define RED  	"\033[31m"
#define GREEN 	"\033[32m"
#define YELLOW 	"\033[33m"
#define GREY	"\033[1;30m"
#define RESET	"\033[0m"
#define BLUE 	"\033[34m"


class Animal
{
private:
    /* data */
public:
    Animal(/* args */);
    Animal(const Animal& animal);
    virtual ~Animal();
    virtual    void makeSound() const;
    const std::string& getType()const;
protected:
    std::string _type;

Animal &operator=(const Animal& animal);
};




#endif