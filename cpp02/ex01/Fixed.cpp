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
	std::cout << "int Constructor called" << std::endl;
	this->value = value;
}
//constructor
Fixed::Fixed(const float value)
{
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
	value = fixed.getRawBits();
	return *this;
}




//toInt
int Fixed::toInt()const {
    std::cout << "to int" << std::endl;
	return this->value;
}
//float
float Fixed::toFloat()const{
    std::cout << "to float" << std::endl;
	return this->value;
}
