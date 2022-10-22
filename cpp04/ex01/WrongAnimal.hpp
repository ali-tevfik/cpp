#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>


class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal(/* args */);
    WrongAnimal(const WrongAnimal& Animal);
    ~WrongAnimal();

    void makeSound() const;

    const std::string& getType()const;

WrongAnimal &operator=( const WrongAnimal& wrongAnimal );
};



#endif