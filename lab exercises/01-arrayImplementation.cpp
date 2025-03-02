// Implementation of arrays
/*
  1. Traversing an array
  2. Insertion in an array
  3. Deletion in an array
*/

#include <iostream>

void traversingArray(int (&arr)[11])
{
  std::cout << "Elements of the array are: ";
  for (int i : arr)
  {
    std::cout << i << " ";
  }
  std::cout << "\n";
}

void insertionArray(int (&arr)[11])
{
  int temp, position;
  std::cout << "What element would you like to enter: ";
  std::cin >> temp;
  std::cout << "\nAt what position (0-10): ";
  std::cin >> position;

  if (position < 0 || position > 10)
  {
    std::cout << "Invalid position!\n";
    return;
  }

  for (int i = 9; i >= position; i--)
  {
    arr[i + 1] = arr[i];
  }

  arr[position] = temp;
}

void deletionArray(int (&arr)[11])
{
  int position;
  std::cout << "What position would you like to remove: ";
  std::cin >> position;

  if (position < 0 || position > 10)
  {
    std::cout << "Invalid position\n";
    return;
  }

  for (int i = position; i < 10; i++)
  {
    arr[i] = arr[i + 1];
  }
  arr[10] = 0;
}

int main()
{

  int arr[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  traversingArray(arr);
  // insertionArray(arr);
  // traversingArray(arr);
  deletionArray(arr);
  traversingArray(arr);
  return 0;
}