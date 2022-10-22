#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
		int _value;
		static const int _fractionalBits = 8;
public:
	Fixed(/* args */);
	~Fixed();
	Fixed(const Fixed &fixed);

	int getRawBits() const;
	void setRawBits(int const raw);

	Fixed & operator=(const Fixed &fixed);
};

#endif