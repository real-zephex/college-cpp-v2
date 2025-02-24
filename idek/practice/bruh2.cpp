// Append alements at runtime and return the sum

// bruh2.cpp

#include <iostream>

int main()
{
  int *arr = new int[6];
  int sum = 0;

  for (int i = 0; i <= 5; i++)
  {
    std::cin >> arr[i];
  }

  for (int i = 0; i <= 5; i++)
  {
    sum += arr[i];
  }

  std::cout << "Sum of the elements is: " << sum;

  return 0;
}