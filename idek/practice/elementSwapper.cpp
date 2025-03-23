// elementSwapper.cpp

#include <iostream>
#include <vector>

int main()
{

  std::vector<int> arr = {1, 2, 3, 4, 5, 6};

  int size = arr.size();
  for (int i = 0; i < size / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[size - 1 - i];
    arr[size - i - 1] = temp;
  };

  for (int i : arr)
  {
    std::cout << i << " ";
  }

  return 0;
}