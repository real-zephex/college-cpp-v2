// arrays.cpp

#include <iostream>

int main()
{
  int num[5] = {1, 2, 3, 4, 5};

  std::cout << "Arrays: ";
  for (int i : num)
  {
    std::cout << i << " ";
  }
  std::cout << "\n";
  // Your code here
  return 0;
}