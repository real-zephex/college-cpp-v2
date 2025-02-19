// linearSearch.cpp

#include <iostream>

int linearSearch(int array[], int find, int size)
{
  for (int i = 0; i < size; i++)
  {
    if (array[i] == find)
    {
      return i;
    }
  }
  return -1;
};

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 33, 42, 43, 12};
  int size = sizeof(arr) / sizeof(arr[0]);
  int index = linearSearch(arr, 1, size);

  std::cout << "Element found at position " << index << ".";

  return 0;
}