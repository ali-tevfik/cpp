#include "ClapTrap.hpp"

int main(int argc, char **argv) {
  (void)argv;
  if (argc != 1)
    exit(EXIT_FAILURE);
{
  std::cout << std::endl;
  std::cout << "[ TEST_ClapTrap : Default constructor & Destructor ]"  << std::endl;
  ClapTrap robot;
}
{
  std::cout << std::endl;
  std::cout << "[ TEST_ClapTrap : Name constructor & Destructor ]" << std::endl;
  ClapTrap robot("Clap");
}
{
  std::cout << std::endl;
  std::cout  << "[ TEST_ClapTrap : Default constructor & Copy constructor & Copy assignment operator & Destructor ]" << std::endl;
  ClapTrap robot1;
  ClapTrap robot(robot1);
}
{
  std::cout << std::endl;
  std::cout  << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x1 ]" << std::endl;
  ClapTrap robot1("Clap");
  ClapTrap robot2("Trap");
  std::cout <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << std::endl;
  std::cout <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << std::endl;
  robot1.attack("Trap");
  std::cout <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << std::endl;
  robot2.takeDamage(0);
  robot2.beReparied(0);
  std::cout  <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << std::endl;
}
{
  std::cout << std::endl;
  std::cout  << "[ TEST_ClapTrap : Attack & Take damage & Be repaired x3]" << std::endl;
  ClapTrap robot1("Clap");
  ClapTrap robot2("Trap");
  std::cout <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << std::endl;
  std::cout  <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << std::endl;
  for (int i = 0; i < 3; i++) {
    robot1.attack("Trap");
    std::cout <<  "Energy Points of " << robot1.getName() << " : " << robot1.getEnergyPoints() << std::endl;
    robot2.takeDamage(5);
    robot2.beReparied(2);
    std::cout  <<  "Energy Points of " << robot2.getName() << " : " << robot2.getEnergyPoints() << std::endl;
  }
}
  std::cout << std::endl;
}