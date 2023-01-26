#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>
//https://en.cppreference.com/w/cpp/language/dynamic_cast

class Base
{
    public:
    virtual ~Base();
};


class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

#endif