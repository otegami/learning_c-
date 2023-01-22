#include <iostream>
// int, double, float, char, bool, void, auto

// int main()
// {
//   int number1 = 15;         // Decimal
//   int number2 = 017;        // Octal
//   int number3 = 0x0F;       // Hexadecimal
//   int number4 = 0b00001111; // Binary

//   std::cout << "number1: " << number1 << std::endl;
//   std::cout << "number2: " << number2 << std::endl;
//   std::cout << "number3: " << number3 << std::endl;
//   std::cout << "number4: " << number4 << std::endl;

//   return 0;
// }

int main()
{
  int elephant_count;
  int lion_count{};
  int dog_count{10};
  int cat_count{15};
  int domesticated_animals{dog_count + cat_count};
  int truck_count{(dog_count + cat_count) * 100};
  // int bad_initialization{doesnt_exist1 + doesnt_exist2};
  // int narrowing_conversion(2.9);
  double narrowing_conversion{2.9};

  // std::cout << 'ElephantCount: ' << elephant_count << std::endl;

  std::cout << "Narrowing conversion: " << narrowing_conversion << std::endl;
  std::cout << "truck count: " << truck_count << std::endl;

  // Check the size with sizeof
  std::cout << "sizeof int: " << sizeof(int) << std::endl;
  std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;
  std::cout << "sizeof double: " << sizeof(double) << std::endl;
  std::cout << "sizeof narrowing_conversion: " << sizeof(narrowing_conversion) << std::endl;

  signed int positive_value{10};
  signed int negative_value{-10};

  unsigned int postive_value{4};
  // unsigned int negative_value{-1}; // Compiler error;

  std::cout << "positve_value: " << positive_value << std::endl;
  std::cout << "negative_value: " << negative_value << std::endl;
  std::cout << "sizeof(positive_value): " << sizeof(positive_value) << std::endl;
  std::cout << "sizeof(negative_value): " << sizeof(negative_value) << std::endl;

  return 0;
}
