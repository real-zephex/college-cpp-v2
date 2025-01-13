// Write a prorgam to check whether a number is positve or negative

#include <iostream>

int main()
{
  int num;

  std::cout << "Enter number: ";
  std::cin >> num;

  if (num > 0)
  {
    std::cout << "The given number is positive";
  }
  else if (num < 0)
  {
    std::cout << "The given number is negative";
  }

  return 0;
}