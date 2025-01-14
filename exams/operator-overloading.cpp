// Operator Overloading
#include <iostream>

class OperatorOverloading
{
  int num1;
  int num2;

public:
  OperatorOverloading() : num1(0), num2(0) {}

  OperatorOverloading(int n1, int n2)
  {
    num1 = n1;
    num2 = n2;
  }

  OperatorOverloading operator+(OperatorOverloading obj)
  {
    OperatorOverloading temp;
    temp.num1 = num1 + obj.num1;
    temp.num2 = num2 + obj.num2;
    return temp;
  }

  void display()
  {
    std::cout << "Num 1: " << num1 << " and Num 2: " << num2 << "\n";
  }
};

int main()
{
  OperatorOverloading o1(1, 2);
  OperatorOverloading o2(3, 4);

  OperatorOverloading sum = o1 + o2;
  sum.display();

  return 0;
}