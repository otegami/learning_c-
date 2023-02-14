#include <iostream>

template <typename T>
concept MyIntegral = std::is_integral_v<T>

template <typename T>
concept Multipliable = requires(T a, T b) {
                         a *b;
                       };

template <typename T>
concept Incrementable = requires(T a) {
                          a += 1;
                          ++a;
                          a++;
                        };

template <typename T>
  requires MyIntegral<t>
T add(T a, T b)
{
  return a + b;
}

int main()
{
  return 0;
}
