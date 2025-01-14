// Exception Handling
#include <iostream>

int main()
{
  int num1, num2;
  try
  {
    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    if (num2 == 0)
    {
      throw std::runtime_error("Division by 0 not possible");
    }
    std::cout << num1 / num2 << "\n";
  }
  catch (const std::exception &e)
  {
    std::cout << "Error: " << e.what() << "\n";
  }

  return 0;
}