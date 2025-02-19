// binarySearch.cpp

#include <iostream>

int binarySearch(int array[], int find, int size)
{
  int left = 0, right = size - 1;

  while (left <= right)
  {
    int mid = left + (right - left) / 2;
    if (array[mid] == find)
    {
      return mid;
    }
    else if (find < array[mid])
    {
      std::cout << "Element is prolly in the left half of the array." << "\n";
      right = mid - 1;
    }
    else
    {
      std::cout << "Element is prolly in the right half of the array." << "\n";
      left = mid + 1;
    }
  }
  return -1;
};

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int index = binarySearch(arr, 9, size);
  std::cout << index;
  return 0;
}