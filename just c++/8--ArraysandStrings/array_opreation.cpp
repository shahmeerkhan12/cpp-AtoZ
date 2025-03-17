#include<iostream>
using namespace std;
int main(){
   int list[10];
   int list_size ;
   cin>>list_size;
   for (size_t i = 0; i < list_size; i++)
   {
      list[i]=10;
   }

   list[5]=list[2]+list[3];
   cout<<list[5]<<endl;

   int listtwo[list_size-1];
}