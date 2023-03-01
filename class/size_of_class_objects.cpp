#include <iostream>

class Wrapper
{
public:
  void do_somehting();
  void print_info();

private:
  int m_var1{};
  int m_var2{};
  std::string m_name{"Someone's name"};
};

class Dog
{
public:
  Dog() = default;
  void print_info();
  void do_something();

private:
  size_t leg_count;
  size_t arm_count;
  int *p_page;
};

int main()
{
  Dog dog1;
  std::cout << "sizeof(size_t): " << sizeof(size_t) << std::endl;
  std::cout << "sizeof(int*): " << sizeof(int *) << std::endl;
  std::cout << "sizeof(Dog): " << sizeof(Dog) << std::endl;

  std::string name("I am the king of the universe!");
  std::cout << "sizeof(name): " << sizeof(name) << std::endl;

  return 0;
};
