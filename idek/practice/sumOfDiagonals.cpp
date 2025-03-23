// sumOfDiagonals.cpp

#include <iostream>
#include <vector>

int main()
{
  std::vector<std::vector<int>> matrix_one = {{1, 2, 3}, {4, 5, 6}, {11, 8, 9}};

  size_t size_one = matrix_one.size();
  int sum1 = 0, sum2 = 0;

  for (int i = 0; i < size_one; i++)
  {
    sum1 += matrix_one[i][i];
    sum2 += matrix_one[i][size_one - 1 - i];
  }

  std::cout << sum1 << " and " << sum2;
  return 0;
}