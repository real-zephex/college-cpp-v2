// 1.cpp

#include <iostream>

struct Node
{
  int data;
  Node *next;
};

// Function to create a new node with given data
Node *createNode(int data)
{
  Node *newNode = new Node(); // Allocate memory for new node
  newNode->data = data;       // Set the data
  newNode->next = nullptr;    // Initialize next to nullptr

  return newNode; // Return the new node
}

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(Node *&head, int data)
{
  Node *newNode = createNode(data); // Create a new node
  newNode->next = head;             // Point the new node's next to the current head

  head = newNode; // Update the head to the new node
}

// Function to insert a node at the end of the linked list
void insertAtEnd(Node *&head, int data)
{
  Node *newNode = createNode(data); // Create a new node

  // If the list is empty, make the new node the head
  if (head == nullptr)
  {
    head = newNode;
    return;
  }

  Node *temp = head; // Temporary pointer to traverse the list
  // Traverse to the end of the list
  while (temp->next != nullptr)
  {
    temp = temp->next;
  }
  temp->next = newNode; // Link the last node to the new node
}

// Function to print the linked list
void printList(Node *head)
{
  std::cout << "Linked List: ";
  // Traverse the list and print each node's data
  while (head != nullptr)
  {
    std::cout << head->data << " -> ";
    head = head->next;
  }
  // Print nullptr at the end to indicate the end of the list
  std::cout << "nullptr" << std::endl;
}

// Function to insert a node with given data after a node with a specific value
void insertInBetween(Node *head, int data, int value)
{
  // Check if the head is null
  if (head == nullptr)
  {
    std::cout << "Head cannot be empty.";
    return;
  }

  // Create a new node with the given data
  Node *newNode = createNode(data);

  // Traverse the list to find the node with the given value
  while (head->data != value)
  {
    // If the end of the list is reached and the value is not found, return
    if (head->next == nullptr)
    {
      return;
    }
    head = head->next;
  }

  // Insert the new node after the node with the given value
  newNode->next = head->next;
  head->next = newNode;
}

void deleteByKey(Node *&head, int value)
{
  // If the list is empty, return
  if (head == nullptr)
    return;

  Node *temp = head;
  Node *prev = nullptr;

  // If the head itself contains the value to be deleted
  if (head->data == value)
  {
    head = head->next; // Move the head to the next node
    delete temp;       // Delete the old head
    return;
  }

  // Traverse the list to find the node to be deleted
  while (temp != nullptr && temp->data != value)
  {
    prev = temp;       // Keep track of the previous node
    temp = temp->next; // Move to the next node
  }

  // If the value is not found in the list, return
  if (temp == nullptr)
    return;

  // Unlink the node from the list
  prev->next = temp->next;
  std::cout << "Deleted node with the value: " << value << "\n";
  // Delete the node
  delete temp;
}

Node *searchForNode(Node *head, int data)
{
  int count = 0;
  while (head->data != data)
  {
    if (head->next == nullptr)
    {
      std::cout << "Sorry but the value was not found in the linked list";
      return;
    }
    count++;
    head = head->next;
  }

  std::cout << "Node found at position: " << count << " in the linked list." << "\n";
  return head;
}

int main()
{
  // Your code here
  Node *newNode = createNode(10);
  insertAtEnd(newNode, 20);
  insertAtBeginning(newNode, 50);
  insertAtEnd(newNode, 30);
  insertInBetween(newNode, 39, 10);
  printList(newNode);
  deleteByKey(newNode, 39);
  Node *findNode = searchForNode(newNode, 12);
  std::cout << "Data stored in the searched node: " << findNode->data << ". The node to which it points is: " << findNode->next->data << ".\n";
  printList(newNode);

  return 0;
}