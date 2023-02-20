#include <iostream>
#include <concepts>

std::integral auto add(std::integral auto a, std::integral auto b)
{
  return a * b;
}

int main()
{
  add(10.0, 0);
  // std::floating_point auto x = add(10, 1);
  return 0;
}
