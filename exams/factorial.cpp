// Write a program to find the factorial of a number

#include <iostream>

int factorial(int num)
{
  int product = 1;

  for (int i = 1; i <= num; i++)
  {
    product *= i;
  }

  return product;
}

int main()
{
  int num;

  std::cout << "Enter number: ";
  std::cin >> num;

  std::cout << "Factorial of " << num << " is " << factorial(num) << "\n";
  return 0;
}