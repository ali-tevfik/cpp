#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed b( a );
Fixed c;
c = b;

std::cout << a.getRawBits() << std::endl;
// std::cout << b.getRawBite() << std::endl;
// std::cout << c.getRawBite() << std::endl;
return 0;
}