#include <iostream>

int main()
{
  int *p_number{};
  // p_number = new int(7);

  if (p_number == nullptr)
  {
    std::cout << "p_number points to a invalid address: " << p_number << std::endl;
  }
  else
  {
    std::cout << "p_number points to a valid address: " << p_number << std::endl;
  }

  if (p_number)
  {
    std::cout << "p_number points to a valid address: " << p_number << std::endl;
  }
  else
  {
    std::cout << "p_number points to a invalid address: " << p_number << std::endl;
  }

  delete p_number;
  p_number = nullptr;

  int *p_number1{};
  delete p_number1;

  return 0;
}
