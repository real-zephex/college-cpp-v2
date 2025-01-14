// While loop

#include <iostream>

int main()
{
  int limit = 1;
  int num;

  std::cout << "Enter number: ";
  std::cin >> num;

  while (limit <= 10)
  {
    std::cout << num << " x " << limit << " = " << limit * num << "\n";
    limit++;
  }

  return 0;
}