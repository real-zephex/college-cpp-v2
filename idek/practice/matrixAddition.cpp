#include <iostream>
#include <vector>

int main()
{
  std::vector<std::vector<int>> matrix_one = {{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
  size_t rows = matrix_one.size();
  size_t cols = matrix_one[0].size();

  std::vector<std::vector<int>> matrix_two(rows, std::vector<int>(cols, 0));
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      std::cout << "Enter number for position " << i << " - " << j << ": ";
      std::cin >> matrix_two[i][j];
    }
  }

  std::vector<std::vector<int>> solution_matrix(rows, std::vector<int>(cols, 0));

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      solution_matrix[i][j] = matrix_one[i][j] + matrix_two[i][j];
    };
  };

  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      std::cout << solution_matrix[i][j] << " ";
    };
    std::cout << "\n";
  };

  return 0;
}