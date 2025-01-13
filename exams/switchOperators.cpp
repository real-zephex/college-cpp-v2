// Switch operator

#include <iostream>

int main()
{

  int num;
  std::cout << "Enter number: ";
  std::cin >> num;

  switch (num)
  {
  case 1:
    std::cout << "The entered option was 1.";
    break;
  case 2:
    std::cout << "The entered option was 2.";
    break;
  default:
    std::cout << "idk what you entered.";
    break;
  }

  std::cout << "\n";
  return 0;
}