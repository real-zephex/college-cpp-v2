// Implementing Binary Search in an array

#include <iostream>

int binarySearch(int (&arr)[10], int find)
{
  int left = 0, right = (sizeof(arr) / sizeof(arr[0])) - 1;

  while (left <= right)
  {
    int middle = left + (right - left) / 2;
    if (arr[middle] == find)
    {
      return middle;
    }
    else if (find > arr[middle])
    {
      left = middle + 1;
    }
    else
    {
      right = middle - 1;
    }
  }
  return -1;
}

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index = binarySearch(arr, 9);

  if (index != -1)
  {
    std::cout << "Element was found at position: " << index;
  }
  else
  {
    std::cout << "Element was not found in the array.";
  }

  return 0;
}