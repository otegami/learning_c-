#include "constant.h"

class Cylinder
{
private:
  double base_radius{1.0};
  double height{1.0};

public:
  Cylinder() = default;
  Cylinder(double radius_param, double height_param);
  double get_base_radius();
  double get_height();
  void set_base_radius(double radius_param);
  void set_height(double height_param);
  double volume();
};
