#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter( T *array, size_t lenght,void (*function)(T const &))
{
    if (!array)
        return ;
    for (size_t i = 0; i < lenght; i++)
    {
            (*function)(array[i]);
    }
    
}
template <typename T>
void write(T const & txt){
    std::cout << txt << std::endl;
}

#endif