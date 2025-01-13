// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include <iostream>

class Circle
{
public:
  double square(int num)
  {
    int square = 1;
    for (int i = 0; i < 2; i++)
    {
      square *= num;
    }
    return square;
  }

  double area()
  {
    return 3.14 * square(radius);
  }
  double circumference()
  {
    return 2 * 3.14 * radius;
  }

  Circle(int _radius)
  {
    radius = _radius;
  }

private:
  int radius;
};

int main()
{

  Circle c(5);
  std::cout << c.area() << "\n";
  std::cout << c.circumference() << "\n";
  return 0;
}