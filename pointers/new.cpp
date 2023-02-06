#include <iostream>

int main()
{
  // When new fails
  // int *lots_of_ints{new int[1000000]};

  // for (size_t i{0}; i < 100; i++)
  // {
  //   try
  //   {
  //     // int *lots_of_ints2{int[1000000000000]};
  //     int *data = new int[10000000000000];
  //   }
  //   catch (std::exception &ex)
  //   {
  //     std::cout << "Cought exception oursleves: " << ex.what() << std::endl;
  //   }
  // }

  // for (size_t i{0}; i < 100; i++)
  // {
  //   try
  //   {
  //     // int *lots_of_ints2{int[1000000000000]};
  //     int *data = new (std::nothrow) int[10000000000000];

  //     if (data != nullptr)
  //     {
  //       std::cout << "Data alloxated" << std::endl;
  //     }
  //     else
  //     {
  //       std::cout << "Data alloxated failed" << std::endl;
  //     }
  //   }
  //   catch (std::exception &ex)
  //   {
  //     std::cout << "Cought exception oursleves: " << ex.what() << std::endl;
  //   }
  // }

  return 0;
}
