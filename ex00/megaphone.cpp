#include <iostream>

int main(int argc, char **argv)
{
  int i = 1;
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  while (i < argc)
  {
    for (size_t x = 0; x < strlen(argv[i]); x++)
      std::cout << (char)toupper(argv[i][x]);
    std::cout << " ";
    i++;
  }
}