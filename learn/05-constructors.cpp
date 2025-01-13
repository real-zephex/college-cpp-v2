// Constructors in CPP
/*
  Constructors are special member functions of a class that are automatically called when an object of a class is created.

  Key features of constructors:
    1. Same name as class
    2. No return type
    3. Automatically invoked
    4. Can be overloaded
    5. Default constructor: If a constructor is explicity defined, C++ provides a default constructor.
*/
#include <iostream>

// Default constructor
// class Foo
// {
// public:
//   // Default constructor
//   Foo()
//   {
//     std::cout << "Default constructor called" << std::endl;
//   }

//   void example()
//   {
//     std::cout << "So you called this funciton, this one right here.";
//   };
// };

class Foobar
{
  int _num;
  std::string _name;

public:
  Foobar(int num, std::string name)
  {
    _num = num;
    _name = name;
  }

  void display()
  {
    std::cout << "Hello " << _num << " and " << _name;
  }
};

int main()
{
  Foobar f(32, "Sumit"); // This will call the parametrized constructor
  f.display();

  return 0;
}
