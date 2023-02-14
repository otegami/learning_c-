#include <iostream>
#include <concepts>

// template <typename T>
//   requires std::integral<T>
// T add(T a, T b)
// {
//   return a + b;
// }

// auto add(std::integral auto a, std::integral auto b)
// {
//   return a + b;
// }

// template <typename T>
// T add(T a, T b)
//   requires std::integral<T>
// {
//   return a + b;
// }

int main()
{
  // char a{10};
  // char b{20};

  // auto result_a = add(a, b);
  // std::cout << "result_a: " << static_cast<int>(result_a) << std::endl;

  // int c{11};
  // int d{5};

  // auto result_b = add(c, d);
  // std::cout << "result_b: " << result_b << std::endl;

  double e{11.9};
  double f{12.1};

  auto result_c = add(e, f);
  std::cout << "result_c: " << result_c << std::endl;
}
