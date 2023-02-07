#include <iostream>
#include <cstring>

int main()
{
  char dest[50] = "Hello";
  char src[50] = "World";

  std::strcat(dest, src);
  std::strcat(dest, " Goodbye World!");

  std::cout << "dest: " << dest << std::endl;

  char hello[50]{"Hello"};
  char source[30]{" There is a bird on my window"};

  std::cout << std::strncat(hello, source, 8) << std::endl;
  std::cout << hello << std::endl;
  std::cout << source << std::endl;

  const char *source3 = "C++ is a multipurpose programing language.";
  char *dest3 = new char[std::strlen(source3) + 1];

  std::cout << "dest3: " << dest3 << std::endl;

  std::strcpy(dest3, source3);

  std::cout << "dest3: " << dest3 << std::endl;

  return 0;
}
