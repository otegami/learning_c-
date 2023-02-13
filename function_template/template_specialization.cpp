#include <iostream>
#include <cstring>
// #include <string>

template <typename T>
T maximum(T a, T b);

// template <>
// const char *maximum<const char *>(const char *a, const char *b);

int main()
{
  int a{10};
  int b{23};
  std::string e{"Hello"};
  std::string f{"World"};

  int max_int = maximum(a, b);
  std::string max_string = maximum(e, f);

  std::cout << "maximum(a, b): " << max_int << std::endl;
  std::cout << "maximum(a, b): " << max_string << std::endl;

  const char *g{"wild"};
  const char *h{"animal"};

  const char *result = maximum(g, h);
  std::cout << "maximum(a, b): " << result << std::endl;

  return 0;
}

template <typename T>
T maximum(T a, T b)
{
  return a > b ? a : b;
}

// template <>
// const char *maximum<const char *>(const char *a, const char *b)
// {
//   return (std::strcmp(a, b) > 0) ? a : b;
// }
