#include <iostream>

// constexpr int get_value()
// {
//   return 3;
// }

// Function
int addNumber(int first_param, int second_param)
{
  int sum = first_param + second_param;
  return sum;
}

int main()
{
  // constexpr int value = get_value();
  // std::cout << "value: " << value << std::endl;
  // std::cout << "Number2" << std::endl;
  // std::cout << "Hello World!" << std::endl;

  // Compile time error
  // std::cout << "Hello World" << std::endl

  // Run time error & warning
  // int value = 7 / 0;
  // std::cout << "Value: " << value << std::endl;

  // int first_number{3}; // Statement
  // int second_number{7};
  // int firstNumber = 34;
  // int secondNumber = 7;

  // int sum = addNumber(first_number, second_number);
  // std::cout << first_number << std::endl;
  // std::cout << second_number << std::endl;
  // std::cout << "The sum of the two number is: " << sum << std::endl;

  // sum = addNumber(25, 7);
  // std::cout << "Sum: " << sum << std::endl;

  int age;
  std::string full_name;

  std::cout << "Please type in your full name: " << std::endl;
  std::getline(std::cin, full_name);

  std::cout << "Please type in your age: " << std::endl;
  std::cin >> age;

  std::cout
      << "Hello " << full_name << "! You are " << age << " years old." << std::endl;
  std::cerr << "Error message: Something is wrong!" << std::endl;
  std::clog << "Log message: Something happened" << std::endl;

  return 0;
}
