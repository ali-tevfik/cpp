#include "Fixed.hpp"

//constructor
Fixed::Fixed(/* args */)
{
	std::cout << "Default Constructor called" << std::endl;
	this->value = 0;
}
//constructor
Fixed::Fixed(int value)
{
	this->value = value * (1 << fractionalBits);
	std::cout << "int Constructor called" << std::endl;
}
//constructor
Fixed::Fixed(const float value)
{
	int a = (1<<fractionalBits);
	this->value = std::roundf( value * (1 << fractionalBits));
	std::cout << "sat  = " << value << "adsasda" <<a  << " result " << value * a << " value = " << this->value << std::endl;
	
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
	return this->value;
}
void Fixed::setRawBits(int const raw) {
	 std::cout <<"setRawBits member function called" << std::endl;
	this->value = raw;
}




// Operators
std::ostream &operator<<( std::ostream &o, const Fixed &fixed){
    o << fixed.toFloat();
    return o;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}




//toInt
int Fixed::toInt()const {
	  int i = this->value / (1 << fractionalBits);
    return i;
}
//float
float Fixed::toFloat()const{
	float f = (float)value / (1 << fractionalBits);
    return f;
}
