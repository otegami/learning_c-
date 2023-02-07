#include <iostream>

// Declaration or Prototype
int max(int a, int b);
int min(int a, int b);

int main(int argc, char **argv)
{
  std::cout << "max(1, 2): " << max(1, 2) << std::endl;
  std::cout << "min(1, 2): " << min(1, 2) << std::endl;

  return 0;
}

// Definition or implementation
int max(int a, int b)
{
  if (a > b)
    return a;
  else
    return b;
}

int min(int a, int b)
{
  if (a < b)
    return a;
  else
    return b;
}
