#include <iostream>

const double PI{3.14};

class Cylinder
{
private:
  double base_radius{1.0};
  double height{1.0};

public:
  // Cylinder()
  // {
  //   base_radius = 2.0;
  //   height = 2.0;
  // };

  // Cylinder(double radius_param, double height_param)
  // {
  //   base_radius = radius_param;
  //   height = height_param;
  // }

  double volume()
  {
    return PI * base_radius * base_radius * height;
  }
};

int main()
{
  Cylinder cylinder1;
  std::cout << "volume c1: " << cylinder1.volume() << std::endl;

  // Cylinder cylinder2;
  // cylinder2 = Cylinder();
  // std::cout << "volume c1: " << cylinder2.volume() << std::endl;

  // Cylinder cylinder3;
  // cylinder3 = Cylinder(5.0, 2.0);
  // std::cout << "volume c1: " << cylinder3.volume() << std::endl;

  return 0;
}
