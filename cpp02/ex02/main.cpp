#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed(2) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
// std::cout << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << a << std::endl;
// std::cout << "--a = " << --a << std::endl;
// std::cout << a << std::endl;
// std::cout << "a++ = " << a++ << std::endl;
// std::cout << a << std::endl;
// std::cout << "a-- = " << a-- << std::endl;
// std::cout << a << std::endl;
// std::cout  << b << std::endl;
// std::cout << "max = " <<  Fixed::max( 50, 10 ) << std::endl;
// std::cout << "min = " << Fixed::min( 50, 10 ) << std::endl;
return 0;
}