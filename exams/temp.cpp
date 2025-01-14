// Operator Overloading

#include <iostream>
class Example
{

public:
  // Declared some attributes
  int num1;
  int num2;

  // Yaha dhyaan dijiyega

  /*
    class_ka_name operator+,-,/,* (class_ka_name &obj)
  */
  Example operator+(Example &obj)
  {
    Example temp; // creating a temporary object;

    /*
      See, hamara motive hai 2 classes ko add karna so it means that hame 2 classes ko handle karna hai

      Jab operator overload hoga to uske paas 2 objects aayenge. generally jo baad me likhte hai wo argument hota hai and pehle was current reference hota hai

      isliye temporary object ke attributes assign karne wakt, num1 + obj.num1 kiya hai;
      num1 being the object jo pehle likha hai and obj being the object jo baad me likha hai. # MARK

    */
    temp.num1 = num1 + obj.num1;
    temp.num2 = num1 + obj.num2;

    return temp;
  }

  void displayNumbers()
  {
    std::cout << "Number 1: " << num1 << "\nNumber 2: " << num2 << "\n";
  };
};

int main()
{
  Example ex1;
  ex1.num1 = 1;
  ex1.num2 = 2;

  Example ex2;
  ex2.num1 = 3;
  ex2.num2 = 4;

  Example ex3 = ex1 + ex2; // #MARK
  ex3.displayNumbers();

  return 0;
}