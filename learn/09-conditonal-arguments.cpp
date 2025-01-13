// Conditonal Arguments

#include <iostream>

int main()
{
  int num, num2;

  std::cout << "Enter number 1";
  std::cin >> num;

  std::cout << "Enter number 2:";
  std::cin >> num2;

  if (num > num2)
  {
    std::cout << num << " is greater than " << num2;
  }
  else
  {
    std::cout << num2 << " is greater than " << num;
  }

  std::cout << "\n";
  return 0;
}

