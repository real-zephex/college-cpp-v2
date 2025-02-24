// Bubble Sort
// Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.

// bubbleSort.cpp

#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &arr)
{
  int length = arr.size();
  std::cout << "Length of the array is " << length << "\n";

  for (int i = 0; i < length; i++)
  {
    for (int j = 0; j < length - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main()
{
  std::vector<int> test = {1, 2, 3, 4, 5};
  bubbleSort(test);

  for (int i : test)
  {
    std::cout << i << " ";
  }

  return 0;
}
