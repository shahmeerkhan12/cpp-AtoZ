#include <iostream>
using namespace std;
struct node
{
   int info;
   struct node *next;
};
void Create_LinkList() // linked list create function
{
   int data;
   node *head, *last;
   node *newnode;
   head = NULL;
   last - NULL;
   cout << "\nenter list of integers ending with -999" << endl;
   cin >> data;
   while (data != -999)
   {
      newnode = new node;
      newnode->info = data;
      newnode->next = NULL;
      if (head == NULL)
      {
         head = newnode;
         last = newnode;
      } // end if
      else
      {
         last->next = newnode;
         last = newnode;
      }
      cin >> data;
   } // end while
   const node *current = head;
   cout<<"the elements of the linked list are:"<<endl;
   while (current != NULL)
   {
      cout << current->info << " ";
      current = current->next;
   }
} // end function
int main()
{
   node *head = NULL;
   // Building linked list by callling the function
   Create_LinkList();
   // calling the function display to show the linked list created
}