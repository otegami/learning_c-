#include "dog.h"

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param)
{
  name = name_param;
  breed = breed_param;
  p_age = new int;
  *p_age = age_param;
  std::cout << "Dog constructor called for: " << name << std::endl;
  std::cout << "Dog: " << name << " constructed at" << this << std::endl;
}

Dog::~Dog()
{
  delete p_age;
  std::cout << "Dog destructor called for: " << name << std::endl;
  std::cout << "Dog: " << name << " destructed at" << this << std::endl;
}

// Dog *Dog::set_name(const std::string_view name)
// {
//   this->name = name;
//   return this;
// }

// Dog *Dog::set_breed(const std::string_view breed)
// {
//   this->breed = breed;
//   return this;
// }

// Dog *Dog::set_age(int age)
// {
//   *(this->p_age) = age;
//   return this;
// }

Dog &Dog::set_name(const std::string_view name)
{
  this->name = name;
  return *this;
}

Dog &Dog::set_breed(const std::string_view breed)
{
  this->breed = breed;
  return *this;
}

Dog &Dog::set_age(int age)
{
  *(this->p_age) = age;
  return *this;
}

void Dog::print_info()
{
  std::cout << "name: " << name << std::endl;
  std::cout << "breed: " << breed << std::endl;
  std::cout << "age: " << *p_age << std::endl;
}
