/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/04 10:42:43 by ibulak        #+#    #+#                 */
/*   Updated: 2023/01/11 15:38:38 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main( void ) {
  Intern intern;
  AForm *form;

  std::cout << std::boolalpha;

  std::cout << YELLOW << "[ TEST_1 ] : makeShrubberyCreationForm " << RESET << std::endl;
  form = intern.makeForm("ShrubberyCreationForm", "target1");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_2 ] : makeRobotomyRequestForm " << RESET << std::endl;
  form = intern.makeForm("RobotomyRequestForm", "target2");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_3 ] : makePresidentialPardonForm " << RESET << std::endl;
  form = intern.makeForm("PresidentialPardonForm", "target3");
	delete form;
  std::cout << std::endl;

  std::cout << YELLOW << "[ TEST_4 ] : wrongForm " << RESET << std::endl;
  form = intern.makeForm("wrongForm", "target4");
	delete form;
  std::cout << std::endl;
  // while(42){};
}