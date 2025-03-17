// Program to demonstrate the quick sort Algorithm
#include <iostream>
using namespace std;
int main()
{
   int A[] = {23, 13, 34, 43, 21, 32, 41};
   int index;
   int len=sizeof(A)/sizeof(A[0]);
   int left[]={};
   int right[]={};
   for (int index = 0; index<len/2; index++)
   {
      cout<<A[index]<<" ";
   }
   
}