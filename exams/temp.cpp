// temp.cpp

#include <iostream>

class Example
{
public:
  int num1;
  int num2;

  // Operator overloading
  Example operator+(Example &obj)
  {
    Example temp; // temporary object
    temp.num1 = num1 + obj.num1;
    temp.num2 = num2 + obj.num2;
    return temp;
  }

  void displayValues()
  {
    std::cout << "Number 1: " << num1 << "\n";
    std::cout << "Number 2: " << num2 << "\n";
  }
};

int main()
{
  // Your code here
  Example ex1;
  ex1.num1 = 1;
  ex1.num2 = 2;

  Example ex2;
  ex2.num1 = 3;
  ex2.num2 = 4;

  Example ex3 = ex1 + ex2;
  ex3.displayValues();

  return 0;
}