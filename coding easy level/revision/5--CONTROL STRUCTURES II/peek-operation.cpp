#include <iostream>
using namespace std;
int MAXSIZE = 8;
int stack[8];
int top = -1;

/* Check if the stack is full */
int isfull(){
   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}
int push(int item)
{
   if (top==MAXSIZE)
   {
    cout<<"Case: overflow"<<endl;    
   }
   else
   top=top+1;
   stack[top]=item;
   int i=1;
   for(int j=1;j<=1;j++)
   {
      cout<<"stack after "<<j<<" insertion is: ";
      for (i = 1; i <= MAXSIZE; i++)
      {
      cout<<stack[i]<<" ";
      }
      cout<<endl;
   }
  
   return 1;
}
/* Main function */
int main(){
   printf("Stack full: %s\n" , isfull()?"true":"false");
   push(23);
   push(23);
   push(23);
   push(23);
   push(23);
   push(23);
   return 0;
}
