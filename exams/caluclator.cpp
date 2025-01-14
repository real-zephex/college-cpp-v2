// Write a program to implement a calculator that performs addition, subtraction, multiplication, and division using switch statements.
#include <iostream>
class Calculator
{

  int num1;
  int num2;
  char choice;

public:
  Calculator(int n1, int n2, char _choice)
  {
    num1 = n1;
    num2 = n2;
    choice = _choice;
  }

  double operation()
  {
    switch (choice)
    {
    case 'A':
      return num1 + num2;
      break;
    case 'S':
      return num1 - num2;
      break;
    case 'M':
      return num1 * num2;
      break;
    case 'D':
      return num1 / num2;
      break;
    }
  }
};

int main()
{
  Calculator calculator(20, 30, 'A');
  double result = calculator.operation();
  std::cout << result << "\n";
}