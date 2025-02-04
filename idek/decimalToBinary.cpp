// Decimal to binary conversion

#include <iostream>
#include <algorithm> // for std::reverse

std::string converter(int num)
{
  std::string answer;

  while (num > 0)
  {
    int remainder = num % 2;
    num /= 2;
    answer += std::to_string(remainder);
  }
  std::reverse(answer.begin(), answer.end());

  return answer;
}

int main()
{
  std::string binary = converter(10);
  std::cout << binary << "\n";
  return 0;
}