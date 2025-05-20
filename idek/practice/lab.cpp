#include <iostream>

class Node
{
public:
  int data;
  Node *nextPointer;

  Node *createNode(int data)
  {
    Node *newNode = new Node({data, nullptr});
    return newNode;
  }

  void insertAtBeginning(Node *&head, int data)
  {
    Node *newNode = createNode(data);
    newNode->nextPointer = head;
    head = newNode;
  };

  void insertAtEnd(Node *&head, int data)
  {
    Node *temp = head;
    Node *newNode = createNode(data);

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

  void insertInMiddle(Node *head, int data, int key)
  {
    Node *newNode = createNode(data);
    Node *prev = nullptr;

    while (head->data != key)
    {
      head = head->nextPointer;
    }

    if (head == nullptr)
    {
      return;
    }

    newNode->nextPointer = head->nextPointer;
    head->nextPointer = newNode;
  }

  void deleteNode(Node *&head, int key)
  {
    Node *temp = head;
    Node *prev = nullptr;

    if (head->data == key)
    {
      head = head->nextPointer;
      delete temp;
      return;
    }

    while (temp != nullptr && temp->data != key)
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
  };

  // Print function to display the linked list
  void printList(Node *head)
  {
    if (head == nullptr)
    {
      std::cout << "List is empty" << std::endl;
      return;
    }

    std::cout << "Linked List: ";
    while (head != nullptr)
    {
      std::cout << head->data;
      head = head->nextPointer;
      if (head != nullptr)
      {
        std::cout << " -> ";
      }
    }
    std::cout << std::endl;
  }
};

int main()
{
  Node linkedList;
  Node *head = nullptr;
  int choice, data, key;

  while (true)
  {
    std::cout << "\n===== Linked List Operations =====\n";
    std::cout << "1. Insert at Beginning\n";
    std::cout << "2. Insert at End\n";
    std::cout << "3. Insert after a Specific Node\n";
    std::cout << "4. Delete a Node\n";
    std::cout << "5. Display Linked List\n";
    std::cout << "0. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 0:
      std::cout << "Exiting program...\n";
      // Clean up memory before exiting
      while (head != nullptr)
      {
        Node *temp = head;
        head = head->nextPointer;
        delete temp;
      }
      return 0;

    case 1:
      std::cout << "Enter data to insert at beginning: ";
      std::cin >> data;
      linkedList.insertAtBeginning(head, data);
      std::cout << "Node inserted at beginning\n";
      break;

    case 2:
      std::cout << "Enter data to insert at end: ";
      std::cin >> data;
      linkedList.insertAtEnd(head, data);
      std::cout << "Node inserted at end\n";
      break;

    case 3:
      if (head == nullptr)
      {
        std::cout << "List is empty. Cannot insert in middle.\n";
        break;
      }
      std::cout << "Enter data to insert: ";
      std::cin >> data;
      std::cout << "Enter key value after which to insert: ";
      std::cin >> key;
      linkedList.insertInMiddle(head, data, key);
      std::cout << "Node inserted after key " << key << "\n";
      break;

    case 4:
      if (head == nullptr)
      {
        std::cout << "List is empty. Nothing to delete.\n";
        break;
      }
      std::cout << "Enter key value to delete: ";
      std::cin >> key;
      linkedList.deleteNode(head, key);
      std::cout << "Node with key " << key << " deleted if found\n";
      break;

    case 5:
      linkedList.printList(head);
      break;

    default:
      std::cout << "Invalid choice. Please try again.\n";
    }
  }

  return 0;
}