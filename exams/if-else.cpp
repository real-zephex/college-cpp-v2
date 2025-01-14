// if-else

// Write a code to check whether a number is odd or even

#include <iostream>

int main()
{
  int num;

  std::cout << "Enter number: ";
  std::cin >> num;

  if (num % 2 == 0)
  {
    std::cout << "Even number" << "\n";
  }
  else
  {
    std::cout << "Odd number" << "\n";
  }

  return 0;
}