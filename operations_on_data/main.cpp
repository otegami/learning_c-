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

  return 0;
}
