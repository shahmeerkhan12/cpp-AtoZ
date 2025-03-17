#include <iostream>
using namespace std;

// Define the structure node for creating the linked list
struct Node
{
    int data;
    Node *next;
};

// Function to insert a new node at the end of the linked list
void insertNode(Node *&head, int newData)
{
    Node *newNode = new Node;
    newNode->data = newData;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *current = head;
        while (current->next != nullptr)
        {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to delete a node with a given value from the linked list
void deleteNode(Node *&head, int target)
{
    if (head == nullptr)
    {
        cout << "\nThe linked list is empty: " << endl;
    }

    if (head->data == target)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    Node *current = head;
    while (current->next != nullptr && current->next->data != target)
    {
        current = current->next;
    }

    if (current->next != nullptr)
    {
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}

// Function to display the linked list
void displayList(const Node *head)
{
    const Node *current = head;
    while (current != nullptr)
    {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    Node *head = nullptr;

    // Build the linked list
    insertNode(head, 1);
    insertNode(head, 2);
    insertNode(head, 3);
    insertNode(head, 4);
    insertNode(head, 5);

    std::cout << "Original Linked List: ";
    displayList(head);

    // Delete a node
    deleteNode(head, 3);
    std::cout << "Linked List after deleting 3: ";
    displayList(head);

    // Delete another node
    deleteNode(head, 1);
    std::cout << "Linked List after deleting 1: ";
    displayList(head);

    // Clean up the remaining nodes
    while (head != nullptr)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}