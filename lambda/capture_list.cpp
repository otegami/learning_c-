#include <iostream>

int main()
{
  double a{10.0};
  double b{21.1};

  auto func = [&a, b]() -> double
  {
    double result = a + b;
    std::cout << "a + b: " << a + b << std::endl;
    return result;
  };

  for (size_t i{}; i < 5; i++)
  {
    func();
    ++a;
  }
  return 0;
}
