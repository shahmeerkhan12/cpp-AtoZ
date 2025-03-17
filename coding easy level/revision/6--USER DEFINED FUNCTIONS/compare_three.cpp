#include<iostream>
using namespace std;
double larger(double x, double y);
double comp_three(double x, double y, double z);
int main()
{
   cout<<"program to output the larger of any two or three numbers:"
   <<"\nto show the functionality of the program please input any two numbers: "
   <<endl;
   int one, two, three;
   cin>>one>>two;
   cout<<"before testing lets test the function larger by:"
   <<"the larger between 8 and 74 is: "<<larger(8.0,74.0)<<endl;
   cout<<"let also test the function compare three by:"
   <<"the larger between 88, 39 and 74 is: "<<comp_three(88,39,74)<<endl;
   cout<<"one is = "<<one
   <<"\ntwo is = "<<two
   <<"\nthe larger between one and two is: "<<larger(one,two)<<endl;
  
}
double larger(double x, double y){
   int max;
   if (x>y)
   max=x;
   else
   max=y;
   return max;
}
double comp_three(double x, double y, double z){
   return larger(x, larger(y,z));
}