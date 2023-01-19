#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <exception>
#include <iomanip>  

class Converter
{
private:
    std::string _valueS;
    int  _valueI;
    double _valueD;
    float  _valueF;
    enum _type_var {_int, _float, _double, _char,_null};
    _type_var _type;
public:
    Converter(/* args */);
    Converter(const std::string & txt);
    Converter(const Converter & converter);
    virtual ~Converter();

    Converter &operator=(const Converter & converter);

    void print();
    void convertI();
    void convertS();
    void convertD();
    void convertF();
    int getType();
    bool isDigit(std::string txt);
};



#endif

