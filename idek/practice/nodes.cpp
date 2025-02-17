// Implementing linked lists in cpp

// nodes.cpp

#include <iostream>

struct Node
{
  int data;
  Node *next;
};

// Function to create a new node
Node *createNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  return newNode;
}

// Function to insert a node at beginning
void insertAtBeginning(Node *&head, int data)
{
  Node *newNode = createNode(data);
  newNode->next = head;
  head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(Node *&head, int data)
{
  Node *newNode = createNode(data);
  Node *temp = head;

  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

// Function to print the contents of the linked list
void printLinkedList(Node *head)
{
  std::cout << "Linked List: ";
  while (head != nullptr)
  {
    std::cout << head->data;
    if (head->next != nullptr)
    {
      std::cout << " -> ";
    }
    head = head->next;
  }
  std::cout << " -> nullptr";
}

int main()
{
  // Your code here

  Node *newNode = createNode(10);
  insertAtBeginning(newNode, 20);
  insertAtEnd(newNode, 30);
  printLinkedList(newNode);

  return 0;
}