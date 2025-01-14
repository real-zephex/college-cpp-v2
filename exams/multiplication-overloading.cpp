// Write a program to overload the * operator to multiply two numbers using a class.
#include <iostream>

class Foobar
{

public:
  int num;
  Foobar operator*(Foobar obj)
  {
    Foobar temp;
    temp.num = num * obj.num;
    return temp;
  }

  void display()
  {
    std::cout << "Number: " << num << "\n";
  }
};

int main()
{
  Foobar f;
  f.num = 43;

  Foobar ff;
  ff.num = 44;

  Foobar foofoo = f * ff;
  foofoo.display();

  return 0;
}