#include <iostream>

int main()
{
  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  std::cout << "sizeof: " << sizeof(numbers) << std::endl;
  std::cout << "numbers[12]: " << numbers[12] << std::endl;
  std::cout << "sizeof: " << sizeof(numbers) << std::endl;

  numbers[130000000] = 1000;
  std::cout << "numbers[12]: " << numbers[12] << std::endl;

  return 0;
}
