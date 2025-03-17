#include<iostream>
using namespace std;
int main()
{  int MAXsize=5,item;
   int Que[5]={};
   int R,F;
   int count=1;
   R=F=-1;
   while(count<MAXsize){
   if (F==MAXsize)
   {
      cout<<"Queue is overflow. Program terminates."<<endl;
   }
   else if (F==R && R==-1)
   {
      //increment F and R by 1 to set it to 0(zero)
      F=R=0;
   }
   else
   {
   R=R+1;
   }
   // take input item
   cout<<"please enter the value to be stored in the queue list:";
   cin>>item;
   // inserting the item
   Que[R]=item;
   // displaying the queue after first insertion
   cout<<Que[R]<<" ";
   count++;
   }
   return 0;
}