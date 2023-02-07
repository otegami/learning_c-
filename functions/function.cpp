#include <iostream>

void enter_bar(int age)
{
  if (age > 18)
  {
    std::cout << "You're " << age << " years old." << std::endl;
  }
  else
  {
    std::cout << "Sorry, you're too young for this." << std::endl;
  }
}

int max(int a, int b)
{
  if (a > b)
  {
    return a;
  }
  else
  {
    return b;
  }
}

int luck_number()
{
  return 777;
}

int main()
{

  // The format of the function
  // return_typ function_name(param1, param2)
  // {
  //   return return_typ;
  // }
  //
  // result_var = function_name(arg1, arg2);

  enter_bar(18);
  enter_bar(19);

  std::cout << "max(1,3)'s result: " << max(1, 3) << std::endl;
  std::cout << "max(4,2)'s result: " << max(4, 2) << std::endl;
  std::cout << "luck_number()'s result " << luck_number() << std::endl;

  return 0;
}
