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
    std::string _txt;
    float  _valueF;
    enum _type_var {_int, _float, _double, _char,_null};
    _type_var _type;
public:
    Converter(const std::string & txt);
    Converter(const Converter & converter);
    virtual ~Converter();

    Converter &operator=(const Converter & converter);

    void print();
    void convertI();
    void convertS();
    void convertD();
    void convertF();

    int getInt()const;
    double getDouble()const;
    float getFloat()const;
    std::string getChar()const;
    int getType()const;

    bool checkType();
    void findType();
    bool displayChar();

    class invalidArgument : public std::exception{
        public :
            virtual const char *what() const throw();
    };
    
};



#endif

