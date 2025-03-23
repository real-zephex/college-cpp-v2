// matrixMulti.cpp

#include <iostream>
#include <vector>

int main()
{
  std::vector<std::vector<int>> m1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  size_t outer = m1.size();
  size_t inner = m1[0].size();
  std::vector<std::vector<int>> m2(outer, std::vector<int>(inner, 0));

  for (int i = 0; i < outer; i++)
  {
    for (int j = 0; j < inner; j++)
    {
      std::cout << "Enter element " << i << " - " << j << ": ";
      std::cin >> m2[i][j];
    }
  }

  std::vector<std::vector<int>> sol(outer, std::vector<int>(inner, 0));

  for (int i = 0; i < outer; i++)
  {
    for (int j = 0; j < inner; j++)
    {
      sol[i][j] = 0;
      for (int k = 0; k < inner; k++)
      {
        sol[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }

  for (int i = 0; i < outer; i++)
  {
    for (int j = 0; j < inner; j++)
    {
      std::cout << sol[i][j] << " ";
    }
    std::cout << "\n";
  }

  return 0;
}
