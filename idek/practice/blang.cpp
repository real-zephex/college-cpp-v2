// Write a program to remove all the duplicate elements from the array

#include <iostream>
#include <vector>

void duplicateRemover(std::vector<int> &ref)
{
  std::vector<int> uniqueArr;
  for (int i = 0; i < ref.size(); i++)
  {
    bool found = false;
    for (int j = 0; j < uniqueArr.size(); j++)
    {
      if (ref[i] == uniqueArr[j])
      {
        found = true;
        break;
      }
    }
    if (!found)
    {
      uniqueArr.push_back(ref[i]);
    }
  }
  ref = uniqueArr;
}

int main()
{

  std::vector<int> arr = {1, 1, 2, 3, 4, 5, 6, 7, 6};
  duplicateRemover(arr);

  for (int i : arr)
  {
    std::cout << i << " ";
  }
  std::cout << "\n";
  return 0;
}