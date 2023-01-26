#include "Converter.hpp"

/**
 * @brief converter func
    std::stof() - convert string to float.
    std::atof() - convert string to double.
    static cast
    https://stackoverflow.com/questions/2544394/c-floating-point-to-integer-type-conversions
    std::fixed (to int->float add .0)
 *
 */


/**
 * @brief detect the literal’s type
		floats :-inff, +inff and nanf
		doubles: -inf, +inf and nan
 * 
 */
std::string typeFloat[4] = { "-inff", "inf", "+inff", "nanf" };
std::string typeDouble[4] = { "-inf", "inf", "+inf", "nan" };


Converter::Converter(const Converter &converter)
{
    *this = converter;
}

Converter::Converter(const std::string &txt) : _valueS("")  ,_valueI(0) , _valueD(0.0), _txt(txt) ,_valueF(0.0f)  , _type(_null)
{
   
}

Converter &Converter::operator=(Converter const &converter)
{
    _valueI = converter.getInt();
    _valueS = converter.getChar();
    _valueD = converter.getDouble();
    _valueF = converter.getFloat();
    return *this;
}

Converter::~Converter()
{
}





void Converter::convertF()
{

    std::string a = _txt.substr(_txt.find(".") + 1);
    
    std::cout << "type is = float " << std::endl;

    _valueI = static_cast<int> (_valueD);
    _valueF = std::stof(_txt);

    if (displayChar())
        std::cout << "char: " << static_cast<char>(_valueF) << std::endl;
    if (_valueD > INT_MAX || _valueF < INT_MIN)
        std::cout << "int: impossible";
    else
        std::cout << "int = " << _valueI << std::endl;
    if (a.length() == 2)
        std::cout << std::setprecision(1) << std::fixed;
    std::cout << "float: " << static_cast<float>(_valueF) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(_valueF) << std::endl;
}

void Converter::convertD()
{
    std::string a = _txt.substr(_txt.find(".") + 1);
    
    std::cout << "type is = double " << std::endl;

    _valueI = static_cast<int> (_valueD);
    if (displayChar())
        std::cout << "char: " << static_cast<char>(_valueD) << std::endl;
    if (_valueD > INT_MAX || _valueD < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int = " << _valueI << std::endl;
    if (a.length() == 1)
        std::cout << std::setprecision(1) << std::fixed;
    std::cout << "float: " << static_cast<float>(_valueD) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(_valueD) << std::endl;
}

void Converter::convertI()
{
    if (_valueD > INT_MAX || _valueD < INT_MIN)
        throw std::overflow_error("int overflow error");
    
    std::cout << "type is = Int " << std::endl;
    _valueI = std::atoi(_txt.c_str());
    if(displayChar())
        std::cout << "char: " << static_cast<char>(_valueD) << std::endl;
    std::cout << "int = " << _valueI << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(_valueI) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(_valueI) << std::endl;
}





void Converter::convertS()
{
    std::cout << "type is = char " << std::endl;
    _valueI = static_cast<int>(_txt[0]);
    std::cout << "char = " << _txt << std::endl;
    std::cout << "int = " << _valueI << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float = " << static_cast<float>(_txt[0]) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double = " << static_cast<double>(_txt[0]) << std::endl;
}

bool Converter::displayChar()
{
    if (!isprint(_valueI)){
        std::cout << "char: NON displayable" << std::endl;
        return false;
    }
    return true;
}

bool Converter::checkType()
{
    for (int i = 0; i < 4; i++)
    {
        if (_txt.find(typeDouble[i]) != std::string::npos){
            std::cout <<"char: impossible" << std::endl;
            std::cout <<"char impossible" << std::endl;
             std::cout <<"double: " << typeDouble[i] << std::endl;
             std::cout <<"float: " << typeFloat[i] << std::endl;
            return true;
        }
    }
    return false;
}


/**
 * @brief i find value what is type
 * @param strtod is to separate(for example "11.03e 0mn"; err is =>  e 0mn)
 * @brief last else means there is another character(For exampla 11.03f e 0mn (err is "f e 0mn"))
 */

void Converter::findType()
{

    char *err;

    if (_txt.length() == 1 && !isdigit(_txt[0]))
        _type = _char;
    else if (_txt.find(".") != std::string::npos)
        _type = _double;
    else
        _type = _int;

    //if it is not char(i want to find is it float or double)
    if (_type != _char)
    {
        _valueD = strtod(_txt.c_str(), &err);
        //this means double or int
        if (!*err)
            return;
        //this means float
        else if((err[0] == 'f' || err[0] == 'F') && err[1] == '\0')
            _type = _float;
        else
            throw std::invalid_argument("Invalid Argument");
    }
}

void Converter::print()
{

    if (checkType())
        return;
    findType();
    switch (_type)
    {
    case _int:
        convertI();
        break;
    case _float:
        convertF();
        break;
    case _double:
        convertD();
        break;
    case _char:
        convertS();
        break;
    default:
        std::cout << "ERRORR!"<<std::endl;

    }
}

void cast_char(int i)
{
    if ((i < 32 && i >= 0) || i == 128)
        std::cout << "char= Non displayable" << std::endl;
    else if (i < 0 || i > 128)
        std::cout << "char= impossible" << std::endl;
    else
        std::cout << "char ='" << static_cast<char>(i) << "'" << std::endl;
}


//getter
int Converter::getInt()const{return _valueI;}
std::string Converter::getChar()const{return _valueS;}
float Converter::getFloat()const{return _valueF;}
double Converter::getDouble()const{return _valueD;}
int Converter::getType() const{ return _type; }
