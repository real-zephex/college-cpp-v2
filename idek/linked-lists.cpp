// Linked Lists

#include <iostream>

// Node structure
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

// Function to insert a node at the beginning
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
  if (head == nullptr)
  {
    head = newNode;
    return;
  }
  Node *temp = head;
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

// MARK - I have to read this code yet.
// Function to delete a node by value
void deleteNode(Node *&head, int key)
{
  Node *temp = head;
  Node *prev = nullptr;

  // If the head node itself holds the key
  if (temp != nullptr && temp->data == key)
  {
    head = temp->next;
    delete temp;
    return;
  }

  // Search for the key to be deleted
  while (temp != nullptr && temp->data != key)
  {
    prev = temp;
    temp = temp->next;
  }

  // If the key is not present in the list
  if (temp == nullptr)
    return;

  // Unlink the node and delete it
  prev->next = temp->next;
  delete temp;
}

// Function to traverse and print the linked list
void printList(Node *head)
{
  Node *temp = head;
  while (temp != nullptr)
  {
    std::cout << temp->data << " -> ";
    temp = temp->next;
  }
  std::cout << "nullptr" << std::endl;
}

int main()
{
  Node *head = nullptr;

  // Insert elements
  insertAtBeginning(head, 10);
  insertAtEnd(head, 20);
  insertAtEnd(head, 30);
  insertAtBeginning(head, 5);

  // Print the linked list
  std::cout << "Linked List: ";
  printList(head);

  return 0;
}