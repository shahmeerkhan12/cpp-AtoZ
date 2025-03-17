#include<iostream>
using namespace std;
int main()
{
   int numbers[5]={4, 5, 2, 3, 1}; 
   int count= sizeof(numbers)/sizeof(numbers[0]);
   int j;
   int key;
   cout<<count;
   for (size_t i = 1; i < count; i++)
   {
      key=numbers[i];
      j=i-1;
      while (j>=0 && numbers[j]>key)
      {
         numbers[j+1]=numbers[j];
         j=j-i;
         numbers[j+1]=key;
      }
      
   }
   cout<<"sorted array:" ;
   for (auto &&i : numbers)
   {
      cout<<i<<" ";
   }
      
   return 0;
}