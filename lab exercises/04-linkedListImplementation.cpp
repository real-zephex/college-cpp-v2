// Linked List Implementation

#include <iostream>

struct Node
{
  int data;
  Node *next;
};

Node *createNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  return newNode;
}

void insertAtBeginning(Node *&head, int data)
{
  Node *newNode = createNode(data);
  if (head == nullptr)
  {
    std::cout << "Head cannot be null pointer.";
    return;
  }

  newNode->next = head;
  head = newNode;
}

void insertAtEnd(Node *head, int data)
{
  Node *newNode = createNode(data);

  if (head == nullptr)
  {
    head = newNode;

    std::cout << "Head cannot be a null pointer" << "\n";
    return;
  }

  while (head->next != nullptr)
  {
    head = head->next;
  };
  head->next = newNode;
}

void insertAtPosition(Node *head, int value, int data)
{
  Node *newNode = createNode(data);
  Node *temp = nullptr;

  while (head->data != value)
  {
    if (head->next == nullptr)
    {
      return;
    }
    head = head->next;
  }
  newNode->next = head->next;
  head->next = newNode;
}

void deleteNode(Node *&head, int value)
{
  if (head == nullptr)
    return;

  Node *temp = head;
  Node *prev = nullptr;

  if (head->data == value)
  {
    head = head->next;
    delete temp;
    return;
  }

  while (temp != nullptr && temp->data != value)
  {
    prev = temp;
    temp = temp->next;
  }

  if (temp == nullptr)
    return;

  prev->next = temp->next;
  delete temp;
}

void printNode(Node *head)
{
  std::cout << "Nodes are: ";
  while (head != nullptr)
  {
    std::cout << head->data << " -> ";
    head = head->next;
  }
  std::cout << "nullptr" << "\n";
}

int main()
{

  Node *newNode = createNode(10);
  printNode(newNode);

  insertAtBeginning(newNode, 20);
  insertAtEnd(newNode, 30);
  printNode(newNode);

  insertAtPosition(newNode, 10, 69);
  printNode(newNode);

  deleteNode(newNode, 10);
  printNode(newNode);

  return 0;
}