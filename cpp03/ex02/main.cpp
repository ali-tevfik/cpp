#include "ScavTrap.hpp"

// int main(int argc, char **argv) {
//   (void)argv;
//   if (argc != 1)
//     exit(EXIT_FAILURE);
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ClapTrap : Default constructor & Destructor ]" << WHITE << std::endl;
//   ClapTrap robot;
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ScavTrap : Default constructor & Destructor ]" << WHITE << std::endl;
//   ScavTrap robot;
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ClapTrap : Name constructor & Destructor ]" << std::endl;
//   ClapTrap robot("Clap");
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ScavTrap : Name constructor & Destructor ]" << std::endl;
//   ScavTrap robot("Scav");
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ClapTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
//   ClapTrap robot1;
//   ClapTrap robot(robot1);
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ScavTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
//   ScavTrap robot1;
//   ScavTrap robot(robot1);
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
//   ClapTrap robot1("Clap");
//   ClapTrap robot2("Trap");
//   std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//   std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
//   robot1.attack("Trap");
//   std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//   robot2.takeDamage(0);
//   robot2.beReparied(0);
//   std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ScavTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
//   ScavTrap robot1("Scav");
//   ScavTrap robot2("Trap");
//   std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//   std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
//   robot1.attack("Trap");
//   std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//   robot2.takeDamage(0);
//   robot2.beReparied(0);
//   std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
//   robot1.guardGate();
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x3]" << std::endl;
//   ClapTrap robot1("Clap");
//   ClapTrap robot2("Trap");
//   std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//   std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
//   for (int i = 0; i < 3; i++) {
//     robot1.attack("Trap");
//     std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//     robot2.takeDamage(5);
//     robot2.beReparied(2);
//     std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
//   }
// }
// {
//   std::cout << std::endl;
//   std::cout << WHITE << "[ TEST_ScavTrap : Attack & Take damage & Be repaired x3]" << std::endl;
//   ScavTrap robot1("Scav");
//   ScavTrap robot2("Trap");
//   std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//   std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
//   for (int i = 0; i < 3; i++) {
//     robot1.attack("Trap");
//     std::cout << WHITE <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << WHITE << std::endl;
//     robot2.takeDamage(5);
//     robot2.beReparied(2);
//     std::cout << WHITE <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << WHITE << std::endl;
//     robot1.guardGate();
//   }
// }
//   std::cout << std::endl;
// }

\

int main(void) {

	ScavTrap a ("hilmi");
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