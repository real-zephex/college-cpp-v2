#include <iostream>

int main()
{
  // Declaring and initializing an array
  int num_array[10] = {10, 20, 30, 40, 50};

  // Accessing element using indexing
  std::cout << "Element at the 2nd position is: " << num_array[2] << "\n";

  // Modifying elements
  num_array[2] = 35;
  std::cout << "Element at the 2nd position is: " << num_array[2] << "\n";

  std::cout << "Elements of the array: ";
  // Traversing the array
  for (auto i : num_array)
  {
    std::cout << i << " ";
  }
  std::cout << std::endl;

  // Inserting an elemenet in between
  int len = sizeof(num_array) / sizeof(num_array[0]);
  for (int i = len - 1; i > 2; i--)
  {
    num_array[i] = num_array[i - 1];
  }
  num_array[2] = 45;

  std::cout << "Elements of the array: ";
  for (auto i : num_array)
  {
    std::cout << i << " ";
  };
  std::cout << std::endl;

  // Deleting an elemenet from between
  for (int i = 2; i < len - 1; i++)
  {
    num_array[i] = num_array[i + 1];
  };
  std::cout << "Elements of the array: ";
  for (auto i : num_array)
  {
    std::cout << i << " ";
  };
  std::cout << std::endl;

  return 0;
}
