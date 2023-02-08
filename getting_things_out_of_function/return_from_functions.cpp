#include <iostream>
#include <string>

int sum(int a, int b);
std::string add_string(std::string str1, std::string str2);

int main()
{
  int a{13};
  int b{21};

  int result = sum(a, b);
  std::cout << "Out: &result(int): " << &result << std::endl;
  std::cout << "Sum: " << result << std::endl;

  std::string str1{"Hello"};
  std::string str2{"World"};

  std::string result_string = add_string(str1, str2);
  std::cout << "Out: &result(std::string): " << &result_string << std::endl;
  std::cout << "Result: " << result_string << std::endl;

  return 0;
}

int sum(int a, int b)
{
  int result = a + b;
  std::cout << "In: &result(int): " << &result << std::endl;
  return result;
}

std::string add_string(std::string str1, std::string str2)
{
  std::string result = str1 + str2;
  std::cout << "In: &result(std::string): " << &result << std::endl;
  return result;
}
