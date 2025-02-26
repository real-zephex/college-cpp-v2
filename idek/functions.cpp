// functions.cpp

#include <iostream>

int number(); // Function Declaration

// Function definition
int number()
{
  return 43;
}

int main()
{
  int num = number(); // Function calling
  std::cout << num << "\n";
  return 0;
}