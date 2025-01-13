// Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. Include member functions to calculate the grade based on the marks and display the student's information.

#include <iostream>

class Student
{
private:
  std::string name;
  int roll;
  int marks;

public:
  Student(std::string _n, int _r, int _m)
  {
    name = _n;
    roll = _r;
    marks = _m;
  }

  std::string marksAnalyzer()
  {
    if (marks > 90)
    {
      return "A";
    }
    else if (marks <= 90 && marks > 80)
    {
      return "B";
    }
    else if (marks <= 80 && marks > 70)
    {
      return "C";
    }
    else if (marks <= 70 && marks > 60)
    {
      return "D";
    }
    else
    {
      return "E";
    }
  }
};

int main()
{
  Student student("Sumit", 30054, 93);
  std::cout << student.marksAnalyzer() << "\n";
  return 0;
}