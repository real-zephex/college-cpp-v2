// Write a program to remove duplicates from an array
#include <iostream>

int main()
{
  int arr[5] = {1, 2, 3, 4, 4};
  int new_arr[5];
  int unique_count = 0;

  for (int i = 0; i < 5; i++)
  {
    bool isFound = false;
    for (int j = 0; j < 5; j++)
    {
      if (arr[i] == new_arr[j])
      {
        isFound = true;
        break;
      }
    }
    if (!isFound)
    {
      new_arr[unique_count] = arr[i];
      unique_count++;
    }

    for (int k = unique_count; k < 5; k++)
    {
      new_arr[k] = 0;
    }
  }

  for (int i : new_arr)
  {
    std::cout << i << " ";
  }
}