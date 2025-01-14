// Function Overloading
#include <iostream>

class Foo
{
public:
  float sum(int a, int b)
  {
    return a + b;
  }

  float sum(float a, float b)
  {
    return a + b;
  }
};

int main()
{
  Foo f;
  int sum = f.sum(1, 2);
  float sum2 = f.sum(1.43f, 43.4f);
  std::cout << sum << "\n";
  std::cout << sum2 << "\n";

  return 0;
}