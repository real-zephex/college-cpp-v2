// matrixMultiplication.cpp

#include <iostream>

int main()
{

  int matrix_one[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int matrix_two[3][3] = {};
  int solution_matrix[3][3] = {};

  std::cout << "Please enter the values for the second matrix: " << "\n";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cin >> matrix_two[i][j];
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      solution_matrix[i][j] = 0;
      for (int k = 0; k < 3; k++)
      {
        solution_matrix[i][j] += matrix_one[i][k] * matrix_two[k][j];
      }
    }
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      std::cout << solution_matrix[i][j] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}