/* author_______shahmir khan
unsorted linked list creation in forward mode.
building linked list forward using while loop*/
#include <iostream>
using namespace std;
struct nodeType
{
   int info;
   nodeType *link;
};
// declaration and definition of function 
// to find a given item at certain index
int main()
{
   nodeType *head, *first, *last, *newNode;
   int num;
   cout << "please enter a list of integers ending with -999:" << endl;
   cin >> num;
    
   // assign null to first and last
   first = last = NULL;
   cout<<"the elements of linked list are: ";
      // create a new node
   while (num != -999)//this condition has to be false in order to stop putting num into linked list
   {
      newNode = new nodeType;
      // assign values to newNode
      newNode->info = num;
      newNode->link = NULL;
      // check wether the list is empty
      if (first == NULL)
      {
         first = newNode;
         last = newNode;
      }
      else
      {
         last->link = newNode;
         last = newNode;
      } // end  if else
    cout<< newNode->info <<" ";
      cin >> num;
   } // end while
}
