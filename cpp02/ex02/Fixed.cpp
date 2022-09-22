#include "Fixed.hpp"

//constructor
Fixed::Fixed(/* args */)
{
	//std::cout << "Default Constructor called" << std::endl;
	this->value = 0;
}
//constructor
Fixed::Fixed(int value)
{
	this->value = value  << fractionalBits;
	//std::cout << "int Constructor called" << std::endl;
}
//constructor
Fixed::Fixed(const float value)
{
	int a = (1<<fractionalBits);
	this->value = std::roundf( value * (1 << fractionalBits));
	// //std::cout << "sat  = " << value << "adsasda" <<a  << " result " << value * a << " value = " << this->value << std::endl;
	
	//std::cout << "float Constructor called" << std::endl;
}

///copy
Fixed::Fixed(const Fixed &fixed)
{
	//std::cout << "Copy Constructor called" << std::endl;
	*this = fixed;
}

//destructor
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}


//setter-getter
int Fixed::getRawBits() const {
	 //std::cout <<"getRawBits member function called" << std::endl;
	return this->value;
}
void Fixed::setRawBits(int const raw) {
	 //std::cout <<"setRawBits member function called" << std::endl;
	this->value = raw;
}




// Operators
std::ostream &operator<<( std::ostream &o, const Fixed &fixed){
	(void) fixed;
    o << fixed.toFloat();
    return o;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->value = fixed.getRawBits();
	return *this;
}

//toInt
int Fixed::toInt()const {
	  return this->value >> fractionalBits;
}
//float
float Fixed::toFloat()const{
	float f = (float)value / (1 << fractionalBits);
    return f;
}



Fixed Fixed::operator * (const Fixed& fixed)
{
	
	return (Fixed(this->toFloat() * fixed.toFloat()));
}
Fixed Fixed::operator / (const Fixed& fixed)
{
	
	return (Fixed(this->toFloat() / fixed.toFloat()));
}
Fixed Fixed::operator - (const Fixed& fixed)
{
	
	return (Fixed(this->toFloat() - fixed.toFloat()));
}
Fixed Fixed::operator + (const Fixed& fixed)
{
	
	return (Fixed(this->toFloat() + fixed.toFloat()));
}




bool  Fixed::operator > (const Fixed& fixed)

{
	return (this->toFloat() > fixed.toFloat());
}

bool  Fixed::operator < (const Fixed& fixed)

{
	return (this->toFloat() < fixed.toFloat());
}

bool  Fixed::operator >= (const Fixed& fixed)

{
	return (this->toFloat() >= fixed.toFloat());
}
bool  Fixed::operator <= (const Fixed& fixed)

{
	return (this->toFloat() <= fixed.toFloat());
}

bool  Fixed::operator != (const Fixed& fixed)

{
	return (this->toFloat() != fixed.toFloat());
}
bool  Fixed::operator == (const Fixed& fixed)

{
	return (this->toFloat() == fixed.toFloat());
}

/// @brief ++a
/// @return 
Fixed& Fixed::operator++()
{
	std::cout << "void "<<std::endl;
	this->value++;
	return (*this);
}
/// @brief a++
/// @param  
/// @return 
Fixed Fixed::operator++(int)
{
	Fixed copy = *this;
	++value;
	return copy;

}



/// @brief --
/// @return 
Fixed Fixed::operator--()
{
	return (this->value--);
}
Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	this->value = (this->value - 1) << fractionalBits;
	return copy.toFloat();

}




/// @brief max min func
/// @param fix1 
/// @param fix2 
/// @return 
const Fixed &Fixed::max(const Fixed &fix1, const Fixed &fix2){
	if (fix1.value > fix2.value)
		return fix1;
	return fix2;
}
const Fixed &Fixed::min(const Fixed &fix1, const Fixed &fix2){
	if (fix1.value < fix2.value)
		return fix1;
	return fix2;
}
