#include <iostream>
#include "cylinder.h"

int main()
{
  Cylinder cylinder1(3, 5);
  std::cout << "volume c1: " << cylinder1.volume() << std::endl;

  std::cout << "before base_radius c1: " << cylinder1.get_base_radius() << std::endl;
  cylinder1.set_base_radius(4);
  std::cout << "after base_radius c1: " << cylinder1.get_base_radius() << std::endl;

  std::cout << "before height c1: " << cylinder1.get_height() << std::endl;
  cylinder1.set_height(1);
  std::cout << "after height c1: " << cylinder1.get_height() << std::endl;

  std::cout << "volume c1: " << cylinder1.volume() << std::endl;

  return 0;
}
