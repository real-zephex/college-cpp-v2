// Call by value
// In call by value, when a funciton is called, a copy of the actual argument is passed to the function.
/*

  This means that any changes to the parameter inside the funciton will not cause any changes to the original parameter.

  The orignal data remains intact because the funciton operates on the copy of the data.alignas

  Advantages:
    1. Easy to implement and understand.
    2. The original data is safe and cannot be accidentally modified.

  Disadvantages:
    1. Since it involves creating a copy of the original data, it becomes really inefficient for larger data structures.
*/

#include <iostream>

int sum(int n1, int n2)
{
  return n1 + n2;
}

int main()
{
  int num, num1;

  std::cout << "Enter number 1: ";
  std::cin >> num;

  std::cout << "Enter number 2: ";
  std::cin >> num1;

  int add = sum(num, num1);
  std::cout << "Sum of the number is " << add << "\n";
  return 0;
}