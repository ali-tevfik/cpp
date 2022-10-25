#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string _idea[100];
public:
    Brain(/* args */);
    Brain(const Brain& brain);
    ~Brain();
    const std::string& get_ideas(int i)const;

Brain &operator=(const Brain& brain);
};


#endif