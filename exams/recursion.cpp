// Recursion
#include <iostream>

int factorial(int num)
{
  if (num == 1)
  {
    return num;
  }

  return num * factorial(num - 1);
}

int main()
{

  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  int fact = factorial(num);
  std::cout << "The factorial of number " << num << " is " << fact << "\n";

  return 0;
}