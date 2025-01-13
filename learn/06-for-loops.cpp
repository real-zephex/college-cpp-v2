//  for loops
#include <iostream>

// Write a program to print all the even number from 1 to 50
int main()
{
  for (int i = 0; i < 51; i++)
  {
    if (i % 2 == 0)
    {
      std::cout << i << std::endl;
    }
  }
  return 0;
}