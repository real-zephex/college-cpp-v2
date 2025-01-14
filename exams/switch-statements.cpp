// Switch statement

// Write a C++ program that takes a day of the week as an integer (1 for Monday, 2 for Tuesday, ..., 7 for Sunday) and prints the name of the day using a switch statement. If the input is not between 1 and 7, print "Invalid day".

#include <iostream>

int main()
{

  int day;
  std::cout << "Enter the integer: ";
  std::cin >> day;

  switch (day)
  {
  case 1:
    std::cout << "Sunday";
    break;
  case 2:
    std::cout << "Monday";
    break;
  case 3:
    std::cout << "Tuesday";
    break;
  default:
    std::cout << "I am too lazy to write the same code again and again.";
    break;
  }

  return 0;
}
