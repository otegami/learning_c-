#include <iostream>

int main()
{
  char character1{'a'};
  char character2{'b'};

  std::cout
      << "character1: " << character1 << std::endl;
  std::cout
      << "character2: " << character2 << std::endl;

  char value = 65;
  std::cout << "value: " << value << std::endl;
  std::cout << "value(int): " << static_cast<int>(value) << std::endl;

  return 0;
}
