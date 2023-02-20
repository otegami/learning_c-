#include <iostream>
#include <concepts>

// template <typename T>
// concept TinyType = requires(T t) {
//                      sizeof(T) < 4;
//                      requires sizeof(T) <= 4;
//                    };

// TinyType auto add(TinyType auto a, TinyType auto b)
// {
//   return a + b;
// }

template <typename T>
concept Addable = requires(T a, T b) {
                    {
                      a + b
                      } -> std::convertible_to<int>;
                  };

Addable auto add(Addable auto a, Addable auto b)
{
  return a + b;
}

int main()
{
  // char x{67};
  // char y{56};

  // int x{67};
  // int y{56};

  double x{67};
  double y{56};

  // std::string x{"Hello"};
  // std::string y{"World"};

  auto result = add(x, y);
  std::cout << "result: " << result << std::endl;
  std::cout << "sizeof(result): " << sizeof(result) << std::endl;

  return 0;
}
