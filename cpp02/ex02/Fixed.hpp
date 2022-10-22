#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
#include <cmath>
# include <string>

class Fixed
{
private:
	int _value;
	static const int _fractionalBits = 8;


public:
	//constructor
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const float value);
	Fixed(int value);
	~Fixed();


	//tofloat-toint
    float toFloat(void) const;
    int toInt(void)const;

	//getter-setter
	int getRawBits() const;
	void setRawBits(int const raw);

	//max min
	static const Fixed  &max(const Fixed &fix1, const Fixed &fix2);
	static const Fixed  &min(const Fixed &fix1, const Fixed &fix2);

	//operator
	Fixed & operator=(const Fixed &fixed);

	Fixed&  operator++();
	Fixed  operator++(int);
	Fixed  operator--();
	Fixed  operator--(int);

	Fixed  operator*(const Fixed& fixed) const;
	Fixed  operator+(const Fixed& fixed);
	Fixed  operator-(const Fixed& fixed);
	Fixed  operator/(const Fixed& fixed);
	
	bool  operator>(const Fixed& fixed);
	bool  operator<(const Fixed& fixed);
	bool  operator>=(const Fixed& fixed);
	bool  operator<=(const Fixed& fixed);
	bool  operator!=(const Fixed& fixed);
	bool  operator==(const Fixed& fixed);
};

std::ostream &operator<<( std::ostream &o, const Fixed &fixed);
#endif
