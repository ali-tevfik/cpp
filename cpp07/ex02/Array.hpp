#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> 
class Array
{
private:
    int _size;
    T *_array;
public:
    Array(/* args */) : _size(0),_array(NULL){}
    Array(int n) : _size(n){ 
        if ( _size < 0)
            throw std::overflow_error("index out of limits ");
        _array = new T[n];
    }
    Array(const Array & array) : _size(0), _array(NULL){ *this = array;}
    ~Array(){ delete[] _array;}

    Array & operator=(const Array & array){
        delete[] _array;
		_size = array.size();
		_array = new T[_size];
		for(int i = 0; i < _size; i++)
			_array[i] = array[i];
		return *this;
    }

    T & operator[](int size) const {
        if (size >= _size || size < 0)
            throw std::overflow_error("index out of limits");
        return _array[size];
    }

    int size() const { return _size; }

};




#endif