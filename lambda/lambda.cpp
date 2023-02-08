#include <iostream>

int main()
{
  // [caputer list](parameters)-> return type {
  //   function body
  // }

  auto func = []()
  { std::cout << "Hello World" << std::endl; };
  func();

  [](double a, double b)
  {
    std::cout << "a + b: " << (a + b) << std::endl;
  }(12.1, 5.7);

  auto result = [](double a, double b)
  {
    return (a + b);
  }(12.1, 5.6);

  auto result_double = [](double a, double b) -> double
  {
    return (a + b);
  }(12.1, 5.6);

  std::cout << result_double << std::endl;
  return 0;
}
