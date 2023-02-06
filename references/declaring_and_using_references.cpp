#include <iostream>

int main()
{
  int int_value{45};
  double double_value{33.65};

  int &reference_to_int_value1{int_value};
  int &reference_to_int_value2 = int_value;
  double &reference_to_double_value1{double_value};

  std::cout << "int_value: " << int_value << std::endl;
  std::cout << "&int_value: " << &int_value << std::endl;

  std::cout << "reference_to_int_value1: " << reference_to_int_value1 << std::endl;
  std::cout << "&reference_to_int_value1: " << &reference_to_int_value1 << std::endl;

  int_value = 20;

  std::cout << "int_value: " << int_value << std::endl;
  std::cout << "&int_value: " << &int_value << std::endl;

  std::cout << "reference_to_int_value1: " << reference_to_int_value1 << std::endl;
  std::cout << "&reference_to_int_value1: " << &reference_to_int_value1 << std::endl;

  return 0;
}
