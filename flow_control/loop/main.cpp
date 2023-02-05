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
  // int scores[]{1, 3, 4, 5, 6};

  // while (j < COUNT)
  // {
  //   // scores[j] = j;
  //   std::cout << "scores: " << scores[j] << std::endl;
  //   j++;
  // }

  // std::cout << "scores: " << scores[11] << std::endl;

  // int scores[]{1, 3, 4, 5, 2, 3};

  // for (auto score : scores)
  // {
  //   std::cout << "score: " << score << std::endl;
  // }

  // const int scores[]{1, 3, 4, 5, 2, 3};
  // scores[2] = 8;
  // main.cpp:53:13: error: assignment of read-only location 'scores[2]'
  //  53 |   scores[2] = 8;

  // int scores[]{1, 3, 4, 5, 2, 3};
  // int sum{0};

  // for (int score : scores)
  // {
  //   sum += score;
  // }
  // std::cout << "sum: " << sum << std::endl;

  // std::cout << "scores size: " << std::size(scores) << std::endl;

  // for (size_t i{0}; i < std::size(scores); i++)
  // {
  //   std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  // }

  char message[6]{'H', 'e', 'l', 'l', 'o', '\0'};

  for (auto c : message)
  {
    std::cout << c;
  }
  std::cout << std::endl;

  std::cout << "message: " << message << std::endl;

  char message4[]{"Hello"};
  std::cout << "message4: " << message4 << std::endl;

  int numbers[]{1, 2, 3, 4, 5};
  std::cout << "numbers: " << numbers << std::endl;
  // numbers: 0x16fccb0b0

  return 0;
}
