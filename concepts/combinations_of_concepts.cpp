#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires(T t) {
                     sizeof(T) <= 4;
                     requires sizeof(T) <= 4;
                   };

// template <typename T>
//   requires std::integral<T> || std::floating_point<T>
template <typename T>
  requires std::integral<T> && TinyType<T>
// template <typename T>
//   requires std::floating_point<T> && TinyType<T>
T add(T a, T b)
{
  return a + b;
}

int main()
{
  // int x{6};
  // int y{4};

  long long int x{6};
  long long int y{4};

  // double x{6};
  // double y{4};

  // std::string x{"Hello"};
  // std::string y{"World"};

  std::cout << "result: " << add(x, y) << std::endl;
  return 0;
}
