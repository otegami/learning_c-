#include <iostream>
#include <cstring>

int main()
{
  // const char message1[]{"The sky is blue."};
  // const char *message2{"Thh sky is blue."};

  // std::cout << "message1" << message1 << std::endl;
  // std::cout << "message2" << message2 << std::endl;

  // std::cout << "strleng(message1)" << std::strlen(message1) << std::endl;
  // std::cout << "strleng(message2)" << std::strlen(message2) << std::endl;

  // std::cout << "sizeof(message1)" << sizeof(message1) << std::endl;
  // std::cout << "sizeof(message2)" << sizeof(message2) << std::endl;

  // std::cout << "std::strcmp(message1, message2): " << std::strcmp(message1, message2) << std::endl;
  // std::cout << "std::strncmp(message1, message2): " << std::strncmp(message1, message2, 3) << std::endl;

  const char *str{"Try not. Do, or do not. There is no try."};
  char target = 'T';
  const char *result = str;
  int iterations{};

  while ((result = std::strchr(result, target)) != nullptr)
  {
    std::cout << "Found '" << target << "' starting at '" << result << "'\n";
    result++;
    iterations++;
  }
  std::cout << "iterations: " << iterations << std::endl;

  char input[] = "/home/user/hello.cpp";
  char *output = std::strrchr(input, '/');

  if (output)
    std::cout << output + 1 << std::endl;

  return 0;
}
