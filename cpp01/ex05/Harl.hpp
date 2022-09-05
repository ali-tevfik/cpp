#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
private:
    void ERROR();
    void DEBUG();
    void INFO();
    void WARNING();
public:
    Harl(/* args */);
    ~Harl();
    void complain( std::string level );
};


#endif