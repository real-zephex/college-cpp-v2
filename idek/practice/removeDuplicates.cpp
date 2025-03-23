// removeDuplicates.cpp

#include <iostream>
#include <vector> // dynamic array

void removeDuplicates(std::vector<int> &arr)
{
  int size = arr.size();        // Finding size of the passed array
  std::vector<int> unique = {}; // Initialized an empty array

  for (int i = 0; i < size; i++) // Outer loop
  {
    bool isPresent = false;                 // Boolean to keep track of elements
    for (int j = 0; j < unique.size(); j++) // Inner loop
    {
      if (arr[i] == unique[j])
      {
        isPresent = true;
        break;
      }
    }

    if (!isPresent)
    {
      unique.push_back(arr[i]);
    }
  }

  arr = unique;
}

int main()
{
  std::vector<int> arr = {1, 1, 2, 3, 4, 5, 5, 5, 6};
  removeDuplicates(arr);

  for (int i : arr)
  {
    std::cout << i << " ";
  };

  return 0;
}