// For loops

#include <iostream>

int main()
{
  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  for (int i = 1; i <= num; i++)
  {
    std::cout << num << " x " << i << " = " << num * i << "\n";
  }

  return 0;
}