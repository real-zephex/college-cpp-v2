// Prime Number

#include <iostream>

int checkPrime(int number)
{
  bool condition = true;

  if (number < 2)
  {
    return false;
  };

  for (int i = 2; i < number; i++)
  {
    if (number % i == 0)
    {
      condition = false;
      break;
    }
  }
  return condition;
}

int main()
{
  int num;

  std::cout << "Enter number: ";
  std::cin >> num;

  bool isPrime = checkPrime(num);
  if (isPrime)
  {
    std::cout << num << " is a prime number." << "\n";
  }
  else
  {
    std::cout << num << " is not a prime number." << "\n";
  }

  return 0;
}