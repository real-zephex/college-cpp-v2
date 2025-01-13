// Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
#include <iostream>

class Rectangle
{
public:
  Rectangle(int _l, int _w)
  {
    length = _l;
    width = _w;
  }

  double perimeter()
  {
    return 2 * (length + width);
  }

  double area()
  {
    return length * width;
  }

private:
  int length;
  int width;
};

int main()
{
  Rectangle r(12, 34);
  std::cout << r.perimeter() << "\n";
  std::cout << r.area() << "\n";
  return 0;
}