#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
#include <cmath>
# include <string>

class Fixed
{
private:
	int value;
	static const int fractionalBits = 16;


	/* data */
public:
	Fixed();
	Fixed(const Fixed &fixed);
	Fixed(const float value);
	Fixed(int value);
	~Fixed();

    float toFloat(void) const;
    int toInt(void)const;
	int getRawBits() const;
	void setRawBits(int const raw);
	static const Fixed  &max(const Fixed &fix1, const Fixed &fix2);
	static const Fixed  &min(const Fixed &fix1, const Fixed &fix2);

	Fixed&  operator++();
	Fixed  operator++(int);
	Fixed  operator--();
	Fixed  operator--(int);

	Fixed & operator=(const Fixed &fixed);
	Fixed  operator*(const Fixed& fixed);
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


/*
		static Fixed	&min(Fixed &fixed1, Fixed &fixed2);
		static Fixed	&max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
		static const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);*/