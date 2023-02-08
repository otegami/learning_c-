#include <iostream>

int main()
{
  int c{42};

  // auto func = [=]()
  // {
  //   std::cout << "Inner value: " << c << std::endl;
  // };

  auto func = [&]()
  {
    std::cout << "Inner value: " << c << std::endl;
    ++c;
  };

  std::cout << "C value: " << c << std::endl;
  func();
  std::cout << "C value: " << c << std::endl;

  return 0;
}
