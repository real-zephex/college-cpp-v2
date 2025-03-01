// bling.cpp

#include <iostream>
#include <vector>

int main()
{

  std::vector<int> arr = {1, 2, 3, 4, 5, 6, 8, 9, 10};
  // int sol[] = {};
  int size = arr.size();
  std::cout << "Size of the array is : " << size << "\n";

  for (int i = 0; i < size / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - 1 - i] = temp;
  }

  std::cout << "Reversed array is: ";
  for (int i : arr)
  {
    std::cout << i << " ";
  }

  return 0;
}