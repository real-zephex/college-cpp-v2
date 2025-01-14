// Write a program to print the Fibonacci series up to a user-defined number using a while loop.
#include <iostream>

int main()
{
  int x = 0, y = 1;
  int limit;
  std::cout << "Enter limit: ";
  std::cin >> limit;

  std::cout << x << " " << y << " ";
  for (int _ = 0; _ < limit; _++)
  {
    int next = x + y;
    std::cout << next << " ";
    x = y;
    y = next;
  }
  std::cout << "\n";

  return 0;
}