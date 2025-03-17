#include<iostream>
using namespace std;
int main()
{
   
   char list[3][16];
   int count=3;
   cout<<"Plese input names of 3 students seperated with a space: \n";
   for(size_t i = 0; i < count; i++)
   {
      // cin.get(list[i],16);
      cin.getline(list[i],16);
   }
   for (size_t i = 0; i < count; i++)
   {
      cout<<list[i]<<endl;
   }
   
   return 0;
}