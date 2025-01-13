// Ternary Operator

#include <iostream>

int main()
{
  int condition;

  std::cout << "Enter either 0 or 1: ";
  std::cin >> condition;

  bool cond = condition == 1 ? true : false;

  std::cout << cond << "\n";
  return 0;
}