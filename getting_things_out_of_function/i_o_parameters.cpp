#include <iostream>
#include <string>

void max_str(const std::string input1, const std::string iput2, std::string &output);
void max_int(int input1, int input2, int &output);
void max_double(double double1, double double2, double *output);

int main()
{
  std::string out_str;
  std::string string1{"Blabama"};
  std::string string2{"Aellevue"};

  max_str(string1, string2, out_str);

  std::cout << "max_str: " << out_str << std::endl;

  int number1{4};
  int number2{6};
  int out_number;

  max_int(number1, number2, out_number);
  std::cout << "max_int: " << out_number << std::endl;

  double double1{4.4};
  double double2{3.1};
  double out_double;

  max_double(double1, double2, &out_double);
  std::cout << "max_double: " << out_double << std::endl;

  return 0;
}

void max_str(const std::string input1, const std::string input2, std::string &output)
{
  if (input1 > input2)
  {
    output = input1;
  }
  else
  {
    output = input2;
  }
}

void max_int(int input1, int input2, int &output)
{
  if (input1 > input2)
  {
    output = input1;
  }
  else
  {
    output = input2;
  }
}

void max_double(double double1, double double2, double *output)
{
  if (double1 > double2)
  {
    *output = double1;
  }
  else
  {
    *output = double2;
  }
}
