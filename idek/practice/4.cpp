// Stacks using arrays

#include <iostream>
#include <vector>

class Stack
{
public:
  std::vector<int> numbers;

  void push(int num)
  {
    numbers.push_back(num);
  }

  void pop()
  {
    numbers.pop_back();
  }

  void display()
  {
    std::cout << "Elements: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++)
    {
      std::cout << *it << ", ";
    }
    std::cout << "\n";
  }
};

int main()
{
  Stack s = Stack();
  s.push(1);
  s.push(2);
  s.push(3);

  s.display();

  s.pop();
  s.display();

  // Your code here
  return 0;
}