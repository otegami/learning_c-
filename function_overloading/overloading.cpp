#include <iostream>
#include <string>

int max(int a, int b);
int max(int a, int b, double c);
double max(double a, double b);
std::string max(std::string a, std::string b);

int main()
{
  int a{1};
  int b{2};
  double c{3.3};

  // double a{2.0};
  // double b{3.3};

  // std::string a{"World"};
  // std::string b{"Hello"};

  // int result = max(a, b);
  // double result = max(a, b);
  int result = max(a, b, c);

  std::cout << result << std::endl;
  return 0;
}

int max(int a, int b)
{
  return (a > b) ? a : b;
}

int max(int a, int b, double c)
{
  std::cout << "Overloading" << std::endl;
  return a;
}

double max(double a, double b)
{
  return (a > b) ? a : b;
}

std::string max(std::string a, std::string b)
{
  return (a > b) ? a : b;
}
