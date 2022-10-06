#include <iostream>
#include "ClapTrap.hpp"

int main(void) {

	ClapTrap a ("hilmi");
	std::cout << a << std::endl;

	a.attack("ali");
	std::cout << a << std::endl;

	a.takeDamage(15);
	std::cout << a << std::endl;

	a.beReparied(20);
	std::cout << a << std::endl;

	// No name given
	ClapTrap b;

	return 0;
}