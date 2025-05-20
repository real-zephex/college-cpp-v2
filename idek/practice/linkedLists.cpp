#include <iostream>

// Creating a node structure
struct Node
{
  int data;
  Node *nextPointer;
};

// Function to create a new node
/*
  params: data (int)
*/
Node *createNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->nextPointer = nullptr;
  return newNode;
}

void insertAtBeginning(Node *&head, int data)
{
  Node *newNode = createNode(data);
  newNode->nextPointer = head;
  head = newNode;
}

void insertAtEnd(Node *&head, int data)
{
  Node *newNode = createNode(data);
  Node *temp = head;

  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  while (temp->nextPointer != nullptr)
  {
    temp = temp->nextPointer;
  }
  temp->nextPointer = newNode;
}

void deleteNode(Node *&head, int value)
{
  Node *temp = head;
  Node *prev = nullptr;

  if (head->data == value)
  {
    head = head->nextPointer;
    delete temp;
    return;
  }

  while (temp->data != value)
  {
    prev = temp;
    temp = temp->nextPointer;
  }

  if (temp == nullptr)
  {
    return;
  }
  prev->nextPointer = temp->nextPointer;
  delete temp;
}

void printList(Node *head)
{
  std::cout << "Linked List: ";
  while (head != nullptr)
  {
    std::cout << head->data << " -> ";
    head = head->nextPointer;
  }
  std::cout << "nullptr" << "\n";
}

int countNodes(Node *head)
{
  int count = 0;
  while (head != nullptr)
  {
    head = head->nextPointer;
    count++;
  }
  return count;
}

int main()
{
  Node *newNode = createNode(10);
  insertAtBeginning(newNode, 20);
  insertAtBeginning(newNode, 30);
  insertAtBeginning(newNode, 40);
  insertAtEnd(newNode, 10);
  insertAtEnd(newNode, 20);
  insertAtEnd(newNode, 10);
  insertAtEnd(newNode, 40);
  deleteNode(newNode, 10);
  printList(newNode);

  int count = countNodes(newNode);
  std::cout << "Number of nodes: " << count;
  return 0;
}