// Arrays

// Write a program which returns the sum of the elements of an array.

#include <iostream>

// int main()
// {
//   int num_array[5] = {1, 2, 3, 4, 5};
//   int sum = 0;
//   for (int i = 0; i < 5; i++)
//   {
//     sum += num_array[i];
//   }
//   std::cout
//       << sum << "\n";
//   return 0;
// }

  int main()
  {
    int num_array[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i : num_array)
    {
      sum += i;
    }
    std::cout
        << sum << "\n";
    return 0;
  }