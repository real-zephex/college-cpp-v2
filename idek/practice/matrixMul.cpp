// matrixMul.cpp

#include <iostream>
#include <vector>

int main()
{

  size_t rows_1, cols_1, rows_2, cols_2;

  std::cout << "Enter rows and columns for matrix one: \n";
  std::cin >> rows_1 >> cols_1;

  std::vector<std::vector<int>> m1(rows_1, std::vector<int>(cols_1, 0));
  for (int i = 0; i < rows_1; i++)
  {
    for (int j = 0; j < cols_1; j++)
    {
      std::cout << "Enter " << i << " and " << j << " element: ";
      std::cin >> m1[i][j];
    }
  }

  std::cout << "Enter rows and columns for matrix two.";
  std::cin >> rows_2 >> cols_2;

  if (cols_1 != rows_2)
  {
    std::cout << "Matrix multiplication not possible. Number of columns for the first matrix should match number of rows in second matrix.";
    return 0;
  }

  std::vector<std::vector<int>> m2(rows_2, std::vector<int>(cols_2, 0));
  for (int i = 0; i < rows_2; i++)
  {
    for (int j = 0; j < cols_2; j++)
    {
      std::cout << "Enter " << i << " and " << j << " element: ";
      std::cin >> m2[i][j];
    }
  }

  std::vector<std::vector<int>> sol(rows_1, std::vector<int>(cols_2, 0));

  for (int i = 0; i < rows_1; i++)
  {
    for (int j = 0; j < cols_2; j++)
    {
      sol[i][j] = 0;
      for (int k = 0; k < cols_1; k++)
      {
        sol[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }

  std::cout << "Resultant Matrix: \n";
  for (int i = 0; i < rows_1; i++)
  {
    for (int j = 0; j < cols_2; j++)
    {
      std::cout << sol[i][j] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}