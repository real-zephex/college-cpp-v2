// insertionInArray.cpp

#include <iostream>
#include <vector>

int main()
{
  int arr[10] = {1, 2, 3, 4};
  int index = 3;
  int number = 10;
  int size = 4;

  for (int i = size; i > index; i--)
  {
    arr[i] = arr[i - 1];
  }

  arr[index] = number;
  size++;

  for (int i : arr)
  {
    std::cout << i << " ";
  }

  return 0;
}