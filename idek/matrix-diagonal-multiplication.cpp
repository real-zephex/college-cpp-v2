#include <iostream>
#include <vector>

std::pair<int, int> diagonalSum(std::vector<std::vector<int>> &arr)
{
  int outer_size = arr.size();

  int sum1 = 0;
  int sum2 = 0;
  for (int i = 0; i < outer_size; i++)
  {
    sum1 += arr[i][i];
    sum2 += arr[i][outer_size - 1 - i];
  }

  return {sum1, sum2};
};

int main()
{

  std::vector<std::vector<int>> matrix = {
      {1, 2, 3, 1},
      {4, 5, 6, 1},
      {7, 8, 9, 1},
      {10, 11, 12, 13}};

  auto [primarySum, secondarySum] = diagonalSum(matrix);

  std::cout << " " << primarySum << "\n";
  std::cout << " " << secondarySum << "\n";

  return 0;
}