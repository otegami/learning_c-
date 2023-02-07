#include <iostream>

int main()
{

  std::cout << "std::isalnum: " << std::endl;

  std::cout << "C is alphanumeric: " << std::isalnum('C') << std::endl;
  std::cout << "^ is alphanumeric: " << std::isalnum('^') << std::endl;
  std::cout << "7 is alphanumeric: " << std::isalnum('7') << std::endl;

  char message[]{"Hello there. How are you doing? The sun is shining."};
  int blank_count{0};

  for (size_t i{0}; i < std::size(message); i++)
  {
    if (std::isblank(message[i]))
    {
      std::cout << "message[" << i << "]" << std::endl;
      blank_count++;
    }
  }

  for (auto character : message)
  {
    if (std::isblank(character))
    {
      std::cout << "character: " << character << "空" << std::endl;
      blank_count++;
    }
  }

  std::cout << "In total we found" << blank_count << " blank characters" << std::endl;

  // #tolower, #toupper, and so on

  return 0;
}
