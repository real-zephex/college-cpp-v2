// factCheck.cpp

#include <iostream>

int main()
{

  int arr[5];

  for (int i = 0; i < 5; i++)
  {
    std::cin >> arr[i];
  }

  for (int i = 0; i < 5; i++)
  {
    std::cout << arr[i] << " ";
  }

  return 0;
}