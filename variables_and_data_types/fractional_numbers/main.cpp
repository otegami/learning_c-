#include <iostream>
#include <iomanip>

// float : 4 bytes, Precision: 7
// double : 8 bytes, Precision: 15
// long double: 12 bytes, , Precision: > double

int main()
{
  float number1{1.12345678901234567890f};
  double number2{1.12345678901234567890};
  long double number3{1.12345678901234567890L};

  std::cout << std::setprecision(20);
  std::cout
      << "number1: " << number1 << std::endl;
  std::cout
      << "number2: " << number2 << std::endl;
  std::cout
      << "number3: " << number3 << std::endl;
  std::cout
      << "size float: " << sizeof(number1) << std::endl;
  std::cout << "size double: " << sizeof(number2) << std::endl;
  std::cout << "size long double: " << sizeof(number3) << std::endl;

  double number4{1.23456789012};

  std::cout << "number4: " << number4 << std::endl;

  return 0;
}
