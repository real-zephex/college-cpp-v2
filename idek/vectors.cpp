// Vectors

#include <iostream>
#include <vector>

int main()
{
  // Declaring a vector of number
  std::vector<int> numbers;

  numbers.push_back(1);
  numbers.push_back(2);
  numbers.push_back(3);

  // Access elements using an iterator
  std::cout << "Elements are: ";
  for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
  {
    std::cout << *it << " ";
  }
  std::cout << std::endl;

  // Access elements using a traditional range based for loop
  std::cout << "Elements are: ";
  for (int i : numbers)
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // Remove the last element
  numbers.pop_back();
  std::cout << "Elements are: ";
  for (auto i : numbers)
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // Modifying the elements of the array
  for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
  {
    *it = *it * 2;
  }
  std::cout << "Elements after modification: ";
  for (auto i : numbers)
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}