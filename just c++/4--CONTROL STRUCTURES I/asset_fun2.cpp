#include<iostream>
//to disable assert fun we use
#include<cassert>
using namespace std;
int main(){
   double hours=10,rate=3,wages;
   //use of assert function
   assert(hours>0 && (0<rate && rate<=15.50));//checks whether a particular condition is true or not
   if(hours>0 && (0<rate && rate<=15.50))
   wages = hours * rate;
   cout<<"\nhours worked is: "<<hours
   <<"\nrate is: "<<rate<<"$ per hour"
   <<"\nwages of the person is:"<<wages<<"$";
   return 0;
}
