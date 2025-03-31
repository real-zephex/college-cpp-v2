// dynamicMemoryAllocation.cpp

#include <iostream>

int main()
{

  int size;

  std::cout << "Enter size of the array: ";
  std::cin >> size;
  int *arr = new int[size];

  for (int i = 0; i < size; i++)
  {
    std::cout << "Enter element " << i << ": ";
    std::cin >> arr[i];
  }

  for (int i = 0; i < size; i++)
  {
    std::cout << arr[i] << " ";
  }

  delete arr;
  return 0;
}