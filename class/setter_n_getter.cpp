#include <iostream>

const double PI{3.14};

class Cylinder
{
private:
  double base_radius{1.0};
  double height{1.0};

public:
  Cylinder(double radius_param, double height_param)
  {
    base_radius = radius_param;
    height = height_param;
  }

  double get_base_radius()
  {
    return base_radius;
  }

  double get_height()
  {
    return height;
  }

  void set_base_radius(double radius_param)
  {
    base_radius = radius_param;
  }

  void set_height(double height_param)
  {
    height = height_param;
  }

  double volume()
  {
    return PI * base_radius * base_radius * height;
  }
};

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
