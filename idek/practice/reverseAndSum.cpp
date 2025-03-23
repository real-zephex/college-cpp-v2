#include <iostream>
#include <vector>

int main()
{
  int arr[6] = {1, 2, 3, 4, 5, 6};
  int arr_two[6] = {7, 8, 9, 10, 11, 12};
  int sol[6];

  int size = sizeof(arr) / sizeof(arr[0]);

  for (int i = 0; i < size; i++)
  {
    sol[i] = arr[i] + arr_two[size - 1 - i];
  }

  for (int i = 0; i < size; i++)
  {
    std::cout << sol[i] << " ";
  }

  return 0;
}