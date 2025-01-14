// Implement multi dimensional arrays in CPP

#include <iostream>

void _1d()
{
  int numArray[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    std::cout << numArray[i] << " ";
  }
};

void _2d()
{
  int numArray[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << numArray[i][j] << " ";
    };
  }
};

int main()
{
  int choice;
  std::cout << "Enter 1 for 1-D array or 2 for 2-D array: ";
  std::cin >> choice;

  if (choice == 1)
  {
    _1d();
  }
  else
  {
    _2d();
  }
  return 0;
}