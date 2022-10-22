#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	std::cout << "Default Constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	 std::cout <<"getRawBits member function called" << std::endl;
	return _value;
}
void Fixed::setRawBits(int const raw) {
	 std::cout <<"setRawBits member function called" << std::endl;
	_value = raw;
}



// Operators
Fixed& Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = fixed.getRawBits();
	return *this;
}
