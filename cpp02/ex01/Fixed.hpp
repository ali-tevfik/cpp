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

	Fixed & operator=(const Fixed &fixed);
};

std::ostream &operator<<( std::ostream &o, const Fixed &fixed);
#endif
