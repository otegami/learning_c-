#include <iostream>

int main()
{
  int age{27};
  int &ref_age{age};
  const int &const_ref_age{age};
  // const int *const const_ptr_to_const_age{&age};

  std::cout << "age: " << age << std::endl;
  std::cout << "ref_age: " << ref_age << std::endl;
  std::cout << "const_ref_age: " << const_ref_age << std::endl;

  age = 28;
  ref_age++;
  // const_ref_age++;

  std::cout << "age: " << age << std::endl;
  std::cout << "ref_age: " << ref_age << std::endl;
  std::cout << "const_ref_age: " << const_ref_age << std::endl;

  return 0;
}
