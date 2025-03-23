// Online C++ compiler to run C++ program online
#include <iostream>

int main()
{
  int num;

  std::cout << "How many elements do you want to enter?: ";
  std::cin >> num;

  int arr[num + 1];

  for (int i = 0; i < num; i++)
  {
    std::cin >> arr[i];
  };

  for (int i = 0; i < num; i++)
  {
    std::cout << arr[i] << " ";
  };

  return 0;
}