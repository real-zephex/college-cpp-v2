// matrix-addition.cpp

#include <iostream>
#include <vector>
int main()
{

  int matrix[2][2] = {{1, 2}, {3, 4}};
  int matrix_two[2][2] = {{5, 6}, {7, 8}};
  int solution[2][2];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      solution[i][j] = matrix[i][j] + matrix_two[i][j];
    }
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      std::cout << solution[i][j] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}