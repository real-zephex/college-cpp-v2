// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
#include <iostream>

class Triangle
{
private:
  int length;
  int width;
  int height;

public:
  Triangle(int _l, int _w, int _h)
  {
    length = _l;
    width = _w;
    height = _h;
  }

  std::string triangleAnalyzer()
  {
    if (length == width && length == height && width == height)
    {
      return "Equilateral";
    }
    else if ((length == width) || (length == height) || (width == height))
    {
      return "Isoceles";
    }
    else
    {
      return "Scalene";
    }
  }
};

int main()
{
  Triangle triangle(20, 20, 20);
  std::cout << triangle.triangleAnalyzer() << "\n";
  return 0;
}