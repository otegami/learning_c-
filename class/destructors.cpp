#include "dog.h"

void some_function()
{
  Dog *p_dog = new Dog("Fluffly", "Shepherd", 2);

  delete p_dog;
}

int main()
{
  some_function();
  std::cout << "Done!" << std::endl;
  return 0;
}
