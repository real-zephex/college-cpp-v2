// Write a program to find the sum of the diagonals of a matrix

#include <iostream>

int main()
{
  int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int sum1 = 0, sum2 = 0;

  for (int i = 0; i < 3; i++)
  {
    sum1 += matrix[i][i];
    sum2 += matrix[i][2 - i];
  }

  std::cout << "Sum of diagonals: " << (sum1 + sum2);
  return 0;
}