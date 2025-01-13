// Copy Constructor

/*
  Copy constructor is used to create copies of an object. This can be achieved by creating a constructor which accepts a reference to an object of the same class as a parameter and then assigns the values of the member variables from the passed object to the new object.
*/

#include <iostream>

class Example
{
  std::string name;
  int age;

public:
  Example(std::string _name, int _age)
  {
    name = _name;
    age = _age;
  }

  Example(const Example &obj)
  {
    name = obj.name;
    age = obj.age;
  }

  void displayInformation()
  {
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
  }
};

int main()
{
  Example e1("Sumit", 18);
  Example e2 = e1;
  e2.displayInformation();
  return 0;
}