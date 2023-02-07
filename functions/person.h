#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
public:
  Person(const std::string &name_param, int age_param);

  void pring_info() const
  {
    std::cout << "name: " << full_name << std::endl;
    std::cout << "age: " << age << std::endl;
  }

private:
  std::string full_name;
  int age;

public:
  static int person_count;
};

#endif
