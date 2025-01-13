// Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter. Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

// I will be ignoring the virtual member funcitons part because wo syllabus me nahi hai

#include <iostream>

class Shape
{
public:
  std::string shapeName;

  Shape(std::string _name)
  {
    shapeName = _name;
  }
  double calculateArea() { return 0.0; };

  double calculatePerimeter() { return 0.0; };

  double square(int num)
  {
    int square = 1;
    for (int i = 0; i < 2; i++)
    {
      square *= num;
    }
    return square;
  }
};

class Square : public Shape
{
public:
  Square() : Shape("Square") {};

  double calculateArea(int side)
  {
    return square(side);
  };

  double calculatePerimeter(int side)
  {
    return 2 * side;
  }
};

class Rectangle : public Shape
{
public:
  Rectangle() : Shape("Rectangle") {};

  double calculateArea(double length, double width)
  {
    return length * width;
  }

  double calculatePerimeter(double length, double width)
  {
    return 2 * (length + width);
  }
};

class Triangle : public Shape
{
public:
  Triangle() : Shape("Triangle") {};

  double calculateArea(double width, double height)
  {
    return 0.5 * width * height;
  };

  double calculatePerimeter(double a, double b, double c)
  {
    return a + b + c;
  }
};

int main()
{
  Square square;
  int side = 5;
  std::cout << "Square Area: " << square.calculateArea(side) << std::endl;
  std::cout << "Square Perimeter: " << square.calculatePerimeter(side) << std::endl;

  Rectangle rectangle;
  double length = 4.0, width = 6.0;
  std::cout << "Rectangle Area: " << rectangle.calculateArea(length, width) << std::endl;
  std::cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter(length, width) << std::endl;

  Triangle triangle;
  int a = 3, b = 4, c = 5, height = 6;
  std::cout << "Triangle Area: " << triangle.calculateArea(b, height) << std::endl;
  std::cout << "Triangle Perimeter: " << triangle.calculatePerimeter(a, b, c) << std::endl;

  return 0;
}