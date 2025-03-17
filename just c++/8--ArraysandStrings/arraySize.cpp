#include<cstring>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
   char list[12]={'a','b','c','d','e','f'};// character Array
   char name[]="john";                         // cstring
   // testing strlen(var) function
   cout<<"\nThe size of list[12]={'a','b','c','d','e','f'} is: "<<strlen(list);
   cout<<endl;
   // int arr[14]={1,2,3,4,5,12,3,4,5,12,3,5,6,7};
   // cout<<strlen(arr); // strlen(var) is only for cstrings or char arrays
   cout<<"The size of  name[ ]=john is: "<<strlen(name);
   cout<<endl;
   // printing name cstring
   cout<<"\n The cstring name[] is: ";
   for (auto &&i : name)
   {
      cout<<i<<" ";
   }
   cout<<endl;

 // testing strcpy(s1,s2)
     char Name[]="khan";
     cout<<"\nThe cstring Name before the operation strcpy(name,Name) is: ";
     for (auto i : Name)
     {
      cout<<i<<" ";
     }

     strcpy(Name,name);
     cout<<"\nThe cstring Name after the operation strcpy(name,Name) is: ";
     for (auto &&i : Name)
     {
      cout<<i<<" ";
     }
cout<<endl;
   return 0;
}
