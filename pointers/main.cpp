#include <iostream>

// int *: pointer
// - p_var: name
// - 1008: address

int main()
{
  // decalring and using pointers

  int int_var{43};
  int *p_int{&int_var};

  // double double_var{1.2};
  // int *p_double{&double_var};
  // error: cannot convert 'double*' to 'int*' in initialization

  double *p_fractional_number{};

  int *p_number1{nullptr};
  int *p_fractional_numner{nullptr};

  std::cout << "pointer address: " << p_int << std::endl;
  std::cout << "value: " << int_var << std::endl;

  int int_var2 = 124;
  p_int = &int_var2;
  std::cout << "pointer address: " << p_int << std::endl;

  std::cout << "pointer address: " << *p_int << std::endl;

  return 0;
}
