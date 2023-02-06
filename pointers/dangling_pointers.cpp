#include <iostream>

int main()
{
  int *p_number{new int(10)};
  int *p_number2{p_number};

  std::cout << "p_number(before delete): " << *p_number << std::endl;
  std::cout << "p_number2(before delete): " << *p_number2 << std::endl;

  delete p_number;
  p_number = nullptr;

  std::cout << "p_number(after delete): " << *p_number << std::endl;
  std::cout << "p_number2(after delete): " << *p_number2 << std::endl;

  return 0;
}
