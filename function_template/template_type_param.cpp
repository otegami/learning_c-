#include <iostream>

template <typename T>
const T &maximum(const T &a, const T &b);

// template <typename T>
// T maximum(T a, T b);

int main()
{
  double a{23.5};
  double b{51.2};

  std::cout << "Out - &a: " << &a << std::endl; // 0x16d3af148
  double max1 = maximum(a, b);
  std::cout << "Out - &a: " << &a << std::endl; // 0x16d3af148

  return 0;
}

// Out - &a: 0x16f87b150
// In - &a: 0x16f87b150
// Out - &a: 0x16f87b150
template <typename T>
const T &maximum(const T &a, const T &b)
{
  ++a;
  std::cout << "In - &a: " << &a << std::endl; // 0x16d3af128
  return (a > b) ? a : b;
}

// Out - &a: 0x16d3af148
// In - &a: 0x16d3af128
// Out - &a: 0x16d3af148
// template <typename T>
// T maximum(T a, T b)
// {
//   std::cout << "In - &a: " << &a << std::endl; // 0x16d3af128
//   return (a > b) ? a : b;
// }
