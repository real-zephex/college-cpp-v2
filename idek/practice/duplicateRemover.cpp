// duplicateRemover.cpp

#include <iostream>
#include <vector>

std::vector<int> duplicateRemover(std::vector<int> &arr)
{
  std::vector<int> newArray;
  for (int i = 0; i < arr.size(); i++)
  {
    bool found = false;
    for (int j = 0; j < newArray.size(); j++)
    {
      if (arr[i] == newArray[j])
      {
        found = true;
        break;
      }
    }
    if (!found)
    {
      newArray.push_back(arr[i]);
    }
  }
  return newArray;
}

int main()
{
  std::vector<int> arr = {1, 2, 1, 2, 3, 4, 4, 5, 6};
  std::vector<int> cleanedArray = duplicateRemover(arr);

  for (int i : cleanedArray)
  {
    std::cout << i << " ";
  }

  return 0;
}