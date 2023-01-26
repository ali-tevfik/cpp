#ifndef DATA_HPP
#define DATA_HPP

//https://en.cppreference.com/w/cpp/language/reinterpret_cast

#include <iostream>

struct Data
{
    std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif