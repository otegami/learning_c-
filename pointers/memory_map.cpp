#include <iostream>

int main()
{
  // virtual memory not real memory
  // 2 to the part of n

  // mmu: memory management unit
  // the mmu managements the real memories

  // system
  // stack: stores our local variables
  // heap: additionam memory that can be queried for at run time
  // data
  // text: codes which we wrote?

  // The diffrence between Stack and Heap
  // - Stack
  //   - Lifetime is controlled by the scope meachanism
  // - Heap
  //   - Lifetime is controlled explicity through new and delete operatars

  // Dynamic memory allocation

  // Stack
  // int number(22);

  // int *p_number4{nullptr};
  // p_number4 = new int;

  // *p_number4 = 77;
  // std::cout << std::endl;
  // std::cout << "Dynamically allocating memory: " << std::endl;
  // std::cout << "p_number4: " << *p_number4 << std::endl;

  // {
  //   int local_var(33);
  //   int *local_ptr_var = new int;
  //   *local_ptr_var = 12;
  // }

  // // std::cout << "local_var: " << local_var << std::endl;
  // std::cout << "local_ptr_var: " << *local_ptr_var << std::endl;

  // int *p_number;
  // int number1{12};

  // p_number = &number1;

  // std::cout << std::endl;
  // std::cout << "Unitialized pointer: " << std::endl;
  // std::cout << "p_number1: " << p_number << std::endl;
  // std::cout << "*p_number1: " << *p_number << std::endl;

  // Bad example
  // int *p_number;
  // std::cout << "Writing in the 56" << std::endl;
  // *p_number = 55;

  // std::cout << std::endl;
  // std::cout << "Unitialized pointer: " << std::endl;
  // std::cout << "p_number1: " << p_number << std::endl;
  // std::cout << "*p_number1: " << *p_number << std::endl;

  // Bad example
  // int *p_number{};

  // *p_number = 3;

  // std::cout << std::endl;
  // std::cout << "Reading and writing through nullptr: " << std::endl;

  int *p_number{nullptr};

  p_number = new int; // Allocate it on heap

  *p_number = 77;

  std::cout << std::endl;
  std::cout << "p_number: " << p_number << std::endl;
  std::cout << "*p_number: " << *p_number << std::endl;

  delete p_number;

  // *p_number = 45;
  // std::cout << std::endl;
  // std::cout << "p_number: " << p_number << std::endl;
  // std::cout << "*p_number: " << *p_number << std::endl;

  // int *p_number1{new int{10}};

  // std::cout << "p_number1: " << p_number1 << std::endl;
  // std::cout << "*p_number1: " << *p_number1 << std::endl;

  // delete p_number1;

  // p_number1 = nullptr;

  return 0;
}
