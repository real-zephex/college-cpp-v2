#include <iostream>
#include <string>

int powerOfTwo(int num)
{
  int result = 1;
  for (int i = 0; i < num; i++)
  {
    result *= 2;
  }
  return result;
}

int conversion(int num)
{
  int decimal = 0;
  std::string num2 = std::to_string(num);

  int len = num2.length();
  for (int i = 0; i < len; i++)
  {
    if (num2[i] == '1')
    {
      decimal += powerOfTwo(len - 1 - i);
    }
  }

  return decimal;
}

int main()
{
  int result = conversion(100010010);
  std::cout << result;

  return 0;
}