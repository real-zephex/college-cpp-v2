// Write a program to find the average of marks stored in an array

#include <iostream>

int main()
{
  int num_array[] = {10, 33, 54, 35, 54};
  int sum = 0;
  int count = sizeof(num_array) / sizeof(num_array[0]);

  for (int i : num_array)
  {
    sum += i;
  }
  std::cout << "The average is " << float(sum) / count << "\n";

  return 0;
}