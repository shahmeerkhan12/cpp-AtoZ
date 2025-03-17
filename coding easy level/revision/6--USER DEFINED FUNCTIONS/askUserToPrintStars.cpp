#include<iostream>
using namespace std;
void printstars(int blanks, int starsinline);
int main(){
 int noOflines;
cout<<"Enter no of lines stars( 1_to_20 ) to to be printed:"<<endl;
cin>>noOflines;
while (noOflines<0 || noOflines>20)
{  
 cout<<" no of lines stars should be between 1_to_20 to to be printed:"<<endl;
 cout<<"Enter no of lines stars( 1_to_20 ) to to be printed:"<<endl;
cin>>noOflines;  
}//end while
 int noOfblanks=30;
 int counter;
 for (counter  = 1; counter<noOflines; counter++)
 {
  printstars( noOfblanks, counter);
  noOfblanks--;
 }//end for
//  int number;
//  cout<<number<<endl;//showing garbage value
   return 0;
}// end main
void printstars(int blanks, int starsinline){
   int count;
   for (int count = 1; count < blanks; count++)
   {
      cout<< ' ';
   }
   for (int count = 1; count < starsinline; count++)
   {
      cout<<  " *";
   }
   cout<<endl;
}