/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: adoner <adoner@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/01 17:48:09 by adoner        #+#    #+#                 */
/*   Updated: 2022/10/01 17:48:09 by adoner        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int i = 1;
	
	if (argc == 1)
    	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
		{
			for (size_t x = 0; x < strlen(argv[i]); x++)
			std::cout << (char)toupper(argv[i][x]);
			i++;
		}
	}
	std::cout << std::endl;
  return 0;
}