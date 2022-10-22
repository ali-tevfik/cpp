#include "Fixed.hpp"

//constructor
Fixed::Fixed(/* args */)
{
	std::cout << "Default Constructor called" << std::endl;
	_value = 0 ;
}
//constructor
Fixed::Fixed(int value)
{
	_value = value << _fractionalBits;
	std::cout << "int Constructor called" << std::endl;
}
//constructor
Fixed::Fixed(const float value)
{
	_value = (int)std::roundf( value * (1 << _fractionalBits));
	printf("a  =   %d \n",_value);
	
	std::cout << "float Constructor called" << std::endl;
}

///copy
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = fixed;
}

//destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


//setter-getter
int Fixed::getRawBits() const {
	 std::cout <<"getRawBits member function called" << std::endl;
	return _value;
}
void Fixed::setRawBits(int const raw) {
	 std::cout <<"setRawBits member function called" << std::endl;
	_value = raw;
}




// Operators
std::ostream &operator<<( std::ostream &o, const Fixed &fixed){
    o << fixed.toFloat();
    return o;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
}




//toInt
int Fixed::toInt()const {
	  int i = _value / (1 << _fractionalBits);
    return i;
}
//float
float Fixed::toFloat()const{
	float f = (float)_value / (1 << _fractionalBits);
    return f;
}
