#include <iostream>

void say_age(int *age);

int main()
{
  int age{23};
  std::cout << "age - before " << age << std::endl;
  std::cout << "age - before " << &age << std::endl;
  say_age(&age); // dereference
  std::cout << "age - after " << age << std::endl;
  std::cout << "age - before " << &age << std::endl;
  return 0;
}

void say_age(int *age)
{
  ++(*age);
  std::cout << "Hello! You are " << *age << " years old." << std::endl;
  std::cout << "Hello! You are " << &age << " years old." << std::endl;
}
