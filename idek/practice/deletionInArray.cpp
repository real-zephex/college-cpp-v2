// deletionInArray.cpp

#include <iostream>

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int index = 5;
  int size = 9;

  for (int i = index; i < size; i++)
  {
    arr[i] = arr[i + 1];
  }

  for (int i : arr)
  {
    std::cout << i << " ";
  }

  return 0;
}