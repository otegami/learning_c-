#include <iostream>

int main()
{
  auto var1{12};
  auto var2{13.0};
  auto var3{14.0f};
  auto var4{15.0l};
  auto var5{'e'};

  auto var6{123u};
  auto var7{123ul};
  auto var8{123ll};

  std::cout << "var1: " << sizeof(var1) << " bytes" << std::endl;
  std::cout << "var2: " << sizeof(var2) << " bytes" << std::endl;
  std::cout << "var3: " << sizeof(var3) << " bytes" << std::endl;
  std::cout << "var4: " << sizeof(var4) << " bytes" << std::endl;
  std::cout << "var5: " << sizeof(var5) << " bytes" << std::endl;
  std::cout << "var6: " << sizeof(var6) << " bytes" << std::endl;
  std::cout << "var7: " << sizeof(var7) << " bytes" << std::endl;
  std::cout << "var8: " << sizeof(var8) << " bytes" << std::endl;
  return 0;
}
