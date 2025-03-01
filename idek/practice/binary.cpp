// Binary Search
// Binary search is a searching algorithm which divides the original array into two equal parts at each step and then discards one of them as it continues to search for the element.

#include <iostream>
#include <vector>

int binary(std::vector<int> arr, int toFind)
{
  int arrSize = arr.size();
  int left = 0, right = arrSize - 1;

  while (left <= right)
  {
    int middle = left + (right - left) / 2;
    if (arr[middle] == toFind)
    {
      return middle;
    }
    else if (arr[middle] > toFind)
    {
      left = middle + 1;
    }
    else
    {
      right = middle - 1;
    };
  }
  return -1;
};
int main()
{

  std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int findIndex = binary(arr, 5);

  std::cout << "Element found at position " << findIndex << "\n";
  return 0;
}