#include <iostream>
#include "person.h"

double weight{};

double add(double a, double b);

int Person::person_count = 8;

Person::Person(const std::string &name_param, int age_param)
    : full_name(name_param), age(age_param)
{
  person_count++;
}

int main()
{
  Person p1("John Snow", 35);
  p1.pring_info();

  double result = add(10, 20);

  std::cout << "result: " << result << std::endl;
  return 0;
}

double add(double a, double b)
{
  return a + b;
}

// Error dubplicated
// If you define it on the other file, it will cause linker error
// double add(double a, double b)
// {
//   return a + b;
// }

// struct Point
// {
//   double m_x;
//   double m_y;
// }
