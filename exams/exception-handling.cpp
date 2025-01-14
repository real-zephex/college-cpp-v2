// Exception handling
#include <iostream>

int main()
{

  int divisor, dividend;
  std::cout << "Enter divisor: ";
  std::cin >> divisor;

  std::cout << "Enter dividend: ";
  std::cin >> dividend;

  try
  {
    if (divisor == 0)
    {
      throw std::runtime_error("Division by zero");
    }
  }
  catch (const std::exception &e)
  {
    std::cout << "Error: " << e.what() << "\n";
  }

  return 0;
}