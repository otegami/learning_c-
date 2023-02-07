#include <iostream>
#include <string>

int main()
{
  std::string full_name;
  std::string planet{"Earth. Where the sky is blue."};

  std::cout << full_name << std::endl;
  std::cout << planet << std::endl;

  std::string greeting{"Hello World"};
  std::string saying_hello{greeting, 6, 5};
  std::cout << saying_hello << std::endl;

  std::string weired_message(4, 'e');
  std::cout << weired_message << std::endl;

  return 0;
}
