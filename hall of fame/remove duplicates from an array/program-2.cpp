#include <iostream>
#include <vector>
#include <algorithm>

void duplicateRemover(std::vector<int> &arr)
{
  std::sort(arr.begin(), arr.end());                 // Sort first
  auto newEnd = std::unique(arr.begin(), arr.end()); // Moves duplicates to end
  // unique points to the first unwanted duplicate element.


  arr.erase(newEnd, arr.end());                      // Erase redundant elements
  /*
    the syntax for the erase funciton is - erase(start, end)
    here, new end is the starting point and arr.end() is the ending point. (ending is not inclusive)

    {1, 2, 3, 4, 5, 6, 5, 5, 6}
                    ↑
                  newEnd  (points to first garbage value)
  */

  
}

int main()
{
  std::vector<int> arr = {1, 1, 2, 3, 4, 5, 6, 7, 6};
  duplicateRemover(arr);

  std::cout << "Array after removing duplicates: ";
  for (int num : arr)
  {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
