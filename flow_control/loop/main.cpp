#include <iostream>

int main()
{
  // for (unsigned int i{1}; i < 10; ++i)
  // {
  //   std::cout << "I love C ++ " << i << " times" << std::endl;
  // }

  size_t j{};
  const size_t COUNT{10};
  // for (j; j < COUNT; ++j)
  // {
  //   std::cout << "I love C ++ " << j << " times" << std::endl;
  // }
  // std::cout << "j: " << j << std::endl;
  // std::cout << "size of size_t: " << sizeof(j) << std::endl;
  // std::cout << "type of size_t: " << typeof(j) << std::endl;

  // while (j < COUNT)
  // {
  //   std::cout << "I love C ++ " << j << " times" << std::endl;
  //   j++;
  // }

  // do
  // {
  //   std::cout << "I love C ++ " << j << " times" << std::endl;
  //   j++;
  // } while (j < COUNT);

  // int scores[10];
  // double scores[5]{12.7, 7.5, 13.2, 13.1, 10.4};
  int scores[]{1, 3, 4, 5, 6};

  while (j < COUNT)
  {
    // scores[j] = j;
    std::cout << "scores: " << scores[j] << std::endl;
    j++;
  }

  std::cout << "scores: " << scores[11] << std::endl;
  return 0;
}
