#include <iostream>
using namespace std;
struct nodeType
{
   int info;
   nodeType *link;
};
int main()
{
   nodeType *first, *last, *newnode;
   int num;
   cout << "Please enter a list of numbers that should end with -999 " << endl;
   cin >> num;
   first = NULL;
   while (num != -999)
   {
      newnode = new nodeType;
      newnode->info = num;
      newnode->link = NULL;
      if (first == NULL)
      {
         first = newnode;
         last = newnode;
      }
      else
      {
         last->link = newnode;
         last = newnode;
      }

      cin >> num;
   } // end while
   // traversing the linked list
   nodeType *temp;
   temp = first;
   cout << "The elements of the linked list are: ";
   while (temp != NULL)
   {
      cout << temp->info << " ";
      temp = temp->link;
   }
   // END TRAVERSING
   // searching a given item in the linked list
   int item = 76;
   first = newnode;
   temp = first;
   while (temp != NULL && temp->info != item)
   {
      temp = temp->link;
   } // endl while
   cout<<endl;
   if (temp == NULL)
   {
      cout << "The item does not exist in the list." << endl;
   }
   else
   {
      cout << "the item exist in the list " << endl;
   }
   return 0;
}
