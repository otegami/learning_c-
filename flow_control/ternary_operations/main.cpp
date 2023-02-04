#include <iostream>

int main()
{
  // result = (condition) ? option1 : option2;

  int max{};
  int a{50};
  int b{500};

  max = a < b ? b : a;

  std::cout << "result :" << max << std::endl;

  return 0;
}
