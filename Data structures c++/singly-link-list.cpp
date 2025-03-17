#include <iostream>
#include <iomanip>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
};
int main()
{
   int x, choice;
   Node *head, *temp, *newnode;
   do
   {
      newnode = new Node;
      cout << "please enter value to add to list ";
      cin >> x;
      newnode->data = x;
      newnode->next = 0;
      if (head = 0)
      {
         head = temp = newnode;
      }
      else
      {
         temp->next = newnode;
         temp = newnode;
      }
      cout << "Do you want to create a new node: enter 1 for yes and 0 for no! ";
      cin >> choice;
   } while (choice);
   cout << "/nyour list data and corresponding address is: " << endl;
   temp = head;
   while (temp != 0)
   {
      cout << setw(8) << temp->data << setw(18) << temp << endl;
      temp = temp->next;
   }
   return 0;
}