#include <iostream>
#include <iomanip>
using namespace std;
int MAXSIZE = 8;
int stack[8];
int top = -1;
// function is_empty
int is_empty()
{
   if (top == -1)
      return true;
   else
      return false;
}
// function is_full
int is_full()
{
   if (top == MAXSIZE)
      return 1;
   else
      return 0;
}
// FUNCTION TO delete from stack
void pop()
{
   int data;
   if (! is_empty())
   {
      data = stack[top];
      top = top - 1;
      return data;
   }
   else
      {cout << "the stack is empty and there is no element to be deleted" << endl;
      }
}
// function to insert element into the stack
  void push( int item)
  {
   if(!is_full)
   {
      top++;
      stack[top]=item;
   }
   else
   cout<<"could not insert the element because the stack is full";
  }
int main()
{
   int i;
   push(11);
   push(12);
   push(13);
   push(14); 
   push(15);
   push(16);
   // printing stack element
   cout << "stack elements are: ";
   for (i = 0; i < 8; i++)
   {
      cout << stack[i]<<" ";
   }
   // cout<<"the element at the top of the stack is: "<<peek()<<endl;
   // stack element after deletion
   cout<<"elements poped(deleted)"<<endl;
   while (!is_empty)
   {
      int data;
      data = pop();
      cout<<data;
   }
   return 0;
}