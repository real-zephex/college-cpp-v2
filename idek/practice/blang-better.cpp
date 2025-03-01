#include <iostream>
#include <vector>
#include <unordered_set>

void duplicateRemover(std::vector<int> &arr)
{
  std::unordered_set<int> seen;
  std::vector<int> uniqueArr;

  for (int num : arr)
  {
    // insert tries to append an element into an array but won't do it if it already exists.
    // Moreover, it also returns two values -- iterator, boolean
    /*
      iterator - pointing to the inserted element.
      boolean - whether the insertion was successful or not.
    */
    // .second() just checks whether the insertion was successful or not. If it's successful then we are inserting the element into the new array.
    if (seen.insert(num).second)
    {
      uniqueArr.push_back(num);
    }
  }

  arr = std::move(uniqueArr);
  // move transfers the ownership of a resource instead of copying it. It basically avoid unnecessary memory operations.
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
