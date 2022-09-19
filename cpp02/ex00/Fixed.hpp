#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
private:
	int value;
	static const int fractionalBits = 8;


	/* data */
public:
	Fixed(/* args */);
	~Fixed();

	int getRawBits() const;
	void setRawBits(int const raw);

	Fixed & operator=(const Fixed &fixed);
};

#endif