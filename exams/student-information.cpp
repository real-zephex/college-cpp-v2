// Student Information
#include <iostream>

class Student
{
private:
  std::string name;
  int age;
  int class_;

public:
  Student(std::string _n, int _a, int _c)
  {
    name = _n;
    age = _a;
    class_ = _c;
  }

  void displayInformation()
  {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Class: " << class_ << "\n";
  }
};

int main()
{
  Student student("Sumit", 18, 12);
  student.displayInformation();

  return 0;
}