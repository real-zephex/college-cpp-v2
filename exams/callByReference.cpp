// Call by reference
// In call by reference, when a function is called, the memory address of the original data is passed to the funciton.
/*

  This means that no copying of data takes place only the memory address is passed around.

  Advantages:
    1. Modifies original data
    2. Efficient for large data

  Disadvanatage:
    1. Side effect
      Changes to the original data might be unintended or difficult to track
    2. Less safe
      Since the function operates on the original data, errors in the function can conrrupt the original data
*/

#include <iostream>

int funcRef(int *ref)
{
  int damn = *ref + 10;
  return damn;
}

int main()
{
  int num = 10;

  int refData = funcRef(&num);
  std::cout << refData << "\n";

  return 0;
}