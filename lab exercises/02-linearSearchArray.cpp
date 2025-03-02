// Implementing Linear Search in an array

#include <iostream>

int linearSearch(int (&arr)[10], int index)
{
  for (int i = 0; i < index; i++)
  {
    if (arr[i] == index)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int index = linearSearch(arr, 9);

  if (index != -1)
  {
    std::cout << "Element was found at position: " << index;
  }
  else
  {
    std::cout << "Element was not found in the array";
  }

  return 0;
}