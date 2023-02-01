#include <iostream>

int main()
{
  int number1{55};
  int number2{60};

  bool result = (number1 < number2);
  std::cout << std::boolalpha << "result : " << result << std::endl;

  return 0;
}
