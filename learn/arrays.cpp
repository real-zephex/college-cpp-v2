// Arrays
// An array is a data structure that can hold a fixed number of elements of the same data type. Arrays are used to store multiple values in a single variabe, instead of declaring separate variables for each value.

#include <iostream>
#include <vector>

int main()
{
  std::vector<int> array;

  // Add new elements | equivalent of .append() in Python
  array.push_back(10);
  array.push_back(20);

  // Remove last element | equivalent of .pop() in Python | But unlike .pop() this does not return the last element
  array.pop_back();

  
  for (int i: array) {
    std::cout << i << "\n";
  }

  return 0;
}