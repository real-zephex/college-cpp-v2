// Create an array and append elements at runtime and compile time and then find the sum of the element

// bruh.cpp

#include <iostream>

int main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int sum = 0;

  for (int i : arr)
  {
    sum += i;
  }

  std::cout << "Sum of the elements: " << sum;

  return 0;
}