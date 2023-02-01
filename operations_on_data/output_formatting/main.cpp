#include <iostream>
#include <iomanip>

int main()
{
  std::cout << "Hello";
  std::cout << "World";
  std::cout << std::endl;

  int col_width{10};

  std::cout << std::right;
  std::cout << std::setw(col_width) << "Last name" << std::setw(col_width) << "First name" << std::setw(col_width) << "age" << std::endl;
  std::cout << std::setw(col_width) << "Otegami" << std::setw(col_width) << "Gamakun" << std::setw(col_width) << "30" << std::endl;

  return 0;
}
