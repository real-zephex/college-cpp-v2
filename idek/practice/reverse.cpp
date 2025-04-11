// Write a program to reverse an array

#include <iostream>

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < 10 / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[10 - i - 1];
    arr[10 - 1 - i] = temp;
  }

  for (int i : arr)
  {
    std::cout << i << " -> ";
  }
  std::cout << "End\n";
  return 0;
}