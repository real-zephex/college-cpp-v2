// calling.cpp

#include <iostream>

int value(int num)
{
  return num + num;
}

void _value(int &num)
{
  num = num * num;
}

int main()
{
  int v1 = value(2);
  std::cout << v1 << "\n";
  _value(v1);
  std::cout << v1 << "\n";
  return 0;
}