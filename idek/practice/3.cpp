// 3.cpp

#include <iostream>

int main()
{
  int array[5] = {1, 2, 3, 4, 5};

  for (int i : array)
  {
    std::cout << i << ", ";
  }
  std::cout << "\n";

  return 0;
}