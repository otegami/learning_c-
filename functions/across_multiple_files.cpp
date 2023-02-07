#include <iostream>
#include "comparisons.h"
#include "operations.h"

// Declaration or Prototype
// int max(int a, int b);
// int min(int a, int b);

// This is compliation model
// source
// => preprocessing
// => ut(translation units)
// => object
// => linking(all files)
// => execute

// int incr_mult(int a, int b)
// {
//   return ((a++) * (b++));
// }

int main(int argc, char **argv)
{
  std::cout << "max(1, 2): " << max(1, 2) << std::endl;
  std::cout << "min(1, 2): " << min(1, 2) << std::endl;

  int x{2};
  int y{3};

  std::cout << "incr_mult(2, 3): " << incr_mult(x, y) << std::endl;

  return 0;
}

// Definition or implementation
// int max(int a, int b)
// {
//   if (a > b)
//     return a;
//   else
//     return b;
// }

// int min(int a, int b)
// {
//   if (a < b)
//     return a;
//   else
//     return b;
// }
