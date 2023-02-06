#include <iostream>

int main()
{
  // What it the differences between references and pointers
  // - References
  //   - Don't use dereferencesing for reading and writing
  //   - Can't be changed to reference
  //   - Must be initialized at declaration
  // - Pointers
  //   - Must go through dereference operator to read/write via pointed to value
  //   - Can be changed to poin somewhere else
  //   - Can be declared un-initialized

  double double_value{12.34};
  double &ref_double_value{double_value};
  double *p_double_value{&double_value};

  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "p_double_value: " << p_double_value << std::endl;
  std::cout << "*p_double_value: " << *p_double_value << std::endl;

  double other_double_value{78.56};
  ref_double_value = other_double_value;

  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "p_double_value: " << p_double_value << std::endl;
  std::cout << "*p_double_value: " << *p_double_value << std::endl;

  double other_double_value2{78.56};
  p_double_value = &other_double_value2;

  std::cout << "double_value: " << double_value << std::endl;
  std::cout << "ref_double_value: " << ref_double_value << std::endl;
  std::cout << "p_double_value: " << p_double_value << std::endl;
  std::cout << "*p_double_value: " << *p_double_value << std::endl;

  return 0;
}
