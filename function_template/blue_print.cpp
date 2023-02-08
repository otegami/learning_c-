#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b);

template <typename T>
T multiplay(T a, T b);

int main()
{
  int a{10};
  int b{23};

  int *p_a{&a};
  int *p_b{&b};

  double c{23.7};
  double d{24.1};

  std::string e{"Hello"};
  std::string f{"World"};

  // std::cout << "max: " << maximum(a, b) << std::endl;
  // std::cout << "max: " << maximum(c, d) << std::endl;
  // std::cout << "max: " << maximum(e, f) << std::endl;
  // std::cout << "max: " << maximum(a, c) << std::endl;
  // std::cout << "max: " << maximum(c, d) << std::endl;
  // std::cout << "max: " << maximum(e, f) << std::endl;

  std::cout << "max: " << maximum(p_a, p_b) << std::endl;

  std::cout << "multiply: " << multiplay(10, 23) << std::endl;

  return 0;
}

template <typename T>
T maximum(T a, T b)
{
  return (a > b) ? a : b;
}

// template <typename T, typename U>
// T maximum(T a, U b)
// {
//   return (a > b) ? a : b;
// }

template <typename T>
T multiplay(T a, T b)
{
  return (a * b);
}
