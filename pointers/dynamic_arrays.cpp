#include <iostream>

int main()
{
  const size_t size{10};

  // double *p_salaries{new double[size]};
  // int *p_students{new (std::nothrow) int[size]};
  // double *p_socres{new (std::nothrow) double[size]{1, 2, 3, 4, 5}};

  // delete[] p_socres;
  // p_scores = nullptr;

  double *temperatures = new double[size]{10.0, 20.0, 30.0, 40.0, 50.0, 60.0, 70.0, 80.0, 90.0, 100.0};
  // for (double temp : temperatures)
  // {
  //   // std::cout << "temperatures: " << temp << std::endl;
  // }

  for (size_t i{0}; i < size; i++)
  {
    std::cout << "temperatures: " << temperatures[i] << " : " << *(temperatures + i) << temperatures << std::endl;
  }

  delete[] temperatures;
  temperatures = nullptr;

  return 0;
}
