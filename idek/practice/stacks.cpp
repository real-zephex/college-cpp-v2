// Implementing Stacks in C++ using Linked Lists.

// Stacks follow LIFO principle meaning the last element to be added is the first one to be removed from the collection.

// stacks.cpp

#include <iostream>

struct Node
{
  int data;
  Node *next;
};

class Stacks
{
public:

  

  Node *createNode(int data)
  {
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
  }

  void push(Node *&head, int data)
  {
    Node *newNode = createNode(data);

    newNode->next = head;
    head = newNode;
  }

  void pop(Node *&head)
  {
    if (head == nullptr)
    {
      return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
  }

  void printLinked(Node *head)
  {
    std::cout << "Linked list: ";
    while (head != nullptr)
    {
      std::cout << head->data << " -> ";
      head = head->next;
    }
    std::cout << "nullptr";
  }
};

int main()
{
  Stacks stack;
  Node *head = nullptr;

  // Push elements onto the stack
  std::cout << "Pushing elements onto the stack:\n";
  stack.push(head, 10);
  stack.push(head, 20);
  stack.push(head, 30);

  // Print the stack
  std::cout << "Stack after pushing elements:\n";
  stack.printLinked(head);
  std::cout << "\n";

  // Pop elements from the stack
  std::cout << "Popping elements from the stack:\n";
  stack.pop(head);
  stack.pop(head);

  // Print the remaining elements in the stack
  std::cout << "Stack after popping elements:\n";
  stack.printLinked(head);
  std::cout << "\n";

  return 0;
}