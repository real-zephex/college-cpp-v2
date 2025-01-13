// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.

#include <iostream>

class Person
{

public:
  Person(std::string _n, int _a, std::string _c)
  {
    name = _n;
    age = _a;
    country = _c;
  }

  void displayDetails()
  {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Country: " << country << "\n";
  }

private:
  std::string name;
  int age;
  std::string country;
};

int main()
{
  Person p("Sumit", 18, "India");
  p.displayDetails();
  return 0;
}