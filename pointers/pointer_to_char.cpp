#include <iostream>

int main()
{
  char *p_char_var{nullptr};
  char char_var{'A'};

  p_char_var = &char_var;

  std::cout << "The value stored in p_char_var: " << *p_char_var << std::endl;

  char *p_message{"Hello World!"};

  std::cout << "p_message: " << *p_message << std::endl;

  char message[]{"Hello World!"};
  message[0] = 'B';
  std::cout << "message: " << message << std::endl;

  return 0;
}
