#include "Converter.hpp"

/**
 * @brief
    std::stof() - convert string to float.
    std::atof() - convert string to double.

    static cast
    https://stackoverflow.com/questions/2544394/c-floating-point-to-integer-type-conversions
    std::fixed (to int->float add .0)
 *
 */

Converter::Converter(/* args */)
{
}

Converter::Converter(const std::string &txt)
{
    _valueS = txt;
    if (isDigit(txt))
    {
        if (txt.find("f") != std::string::npos)
        {
            _type = _float;
            _valueF = std::stof(txt.c_str());
        }
        else if (txt.find(".") != std::string::npos)
        {
            _type = _double;
            _valueD = atof(txt.c_str());
        }

        else
        {
            _valueI = std::stoi(txt);
            _type = _int;
        }
    }
    else if (txt.length() == 1 && isalpha(txt[0]))
    {
        _type = _char;
        _valueS = txt;
    }
    else
    {
        _type = _null;
    }
}

bool Converter::isDigit(std::string txt)
{
    for (int i = 0; i < txt[i]; i++)
    {
        if (!std::isdigit(txt[i]))
            if (txt.find("f") == std::string::npos)
                if (txt.find(".") == std::string::npos)
                    if (!(txt[i] == '-' && i == 0))
                        return false;
    }
        return true;
}

Converter &Converter::operator=(const Converter &converter)
{
    const_cast<std::string &>(_valueS) = converter._valueS;
    return *this;
}

Converter::Converter(const Converter &converter)
{
    _valueI = converter._valueI;
    _valueS = converter._valueS;
    _valueD = converter._valueD;
    _valueF = converter._valueF;
    _type = converter._type;
    *this = converter;
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

void Converter::convertF()
{
    std::cout << "type is = float " << std::endl;

    cast_char(static_cast<int>(_valueS[0]));
    std::cout << "int = " << static_cast<int>(_valueF) << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float = " << static_cast<float>(_valueF) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double = " << static_cast<double>(_valueF) << std::endl;
}

void Converter::convertI()
{
    std::cout << "type is = Int " << std::endl;

    cast_char(static_cast<int>(_valueS[0]));
    std::cout << "int = " << _valueI << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float= " << static_cast<float>(_valueI) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double = " << std::fixed << std::setprecision(1) << static_cast<double>(_valueI) << std::endl;
}
void Converter::convertD()
{
    std::cout << "type is = double " << std::endl;

    cast_char(static_cast<int>(_valueS[0]));
    std::cout << "int = " << static_cast<int>(_valueD) << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float = " << static_cast<float>(_valueD) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double = " << static_cast<double>(_valueD) << std::endl;
}
void Converter::convertS()
{
    std::cout << "type is = char " << std::endl;

    cast_char(static_cast<int>(_valueS[0]));
    std::cout << "int = " << static_cast<int>(_valueS[0]) << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "float = " << static_cast<float>(_valueS[0]) << "f" << std::endl;
    std::cout << std::fixed << std::setprecision(1) << "double = " << static_cast<double>(_valueS[0]) << std::endl;
}

void Converter::print()
{

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
        return;
    }
}
int Converter::getType() { return _type; }

Converter::~Converter()
{
}
