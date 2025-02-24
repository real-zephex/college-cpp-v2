// lolzz.cpp

#include <iostream>

int main()
{

  int arr[5] = {1, 2, 3, 4, 5};
  int arr1[5] = {24, 98, 12, 23, 10};
  int arr2[5];
  // TODO: Create a new array where newArr[0] = arr[0] + arr[4]

  for (int i = 0; i < 5; i++)
  {
    arr2[i] = arr[i] + arr1[4 - i];
  }

  std::cout << "New array is: ";
  for (int i = 0; i < 5; i++)
  {
    std::cout << arr2[i] << " ";
  }

  return 0;
}