#include <iostream>

int main()
{
  // std::cout << std::setw(10) << "Last name" << std::setw(10) << "Kodama" << std::endl;

  bool condition{true};
  std::cout << "condition: " << condition << std::endl;
  std::cout << std::boolalpha;
  std::cout << "condition: " << condition << std::endl;

  int pos_num{34};
  int neg_num{-45};

  std::cout << std::showpos;
  std::cout << "pos_num: " << pos_num << std::endl;

  std::cout << std::noshowpos;
  std::cout << "pos_num: " << pos_num << std::endl;

  short int var1{10};
  short int var2{10};
  char var3{40};
  char var4{50};

  std::cout << "size of var1 : " << sizeof(var1) << std::endl;
  std::cout << "size of var2 : " << sizeof(var2) << std::endl;
  std::cout << "size of var3 : " << sizeof(var3) << std::endl;
  std::cout << "size of var4 : " << sizeof(var4) << std::endl;

  auto result1 = var1 + var2;
  auto result2 = var3 + var4;

  std::cout << "size of result1 : " << sizeof(result1) << std::endl;
  std::cout << "result1 : " << result1 << std::endl;
  std::cout << "size of result2 : " << sizeof(result2) << std::endl;
  std::cout << "result2 : " << result2 << std::endl;

  return 0;
}
