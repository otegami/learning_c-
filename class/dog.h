#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string_view>

class Dog
{
public:
  Dog() = default;
  Dog(std::string_view name_param, std::string_view breed_param, int age_param);
  ~Dog();

public:
  // Dog *set_name(const std::string_view name);
  // Dog *set_breed(const std::string_view breed);
  // Dog *set_age(int age);

  Dog &set_name(const std::string_view name);
  Dog &set_breed(const std::string_view breed);
  Dog &set_age(int age);
  void print_info();

private:
  std::string name;
  std::string breed;
  int *p_age;
};

#endif
