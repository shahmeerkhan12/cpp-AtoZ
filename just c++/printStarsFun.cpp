#include<iostream>
using namespace std;
void printstars(int blanks, int starsinline);
int main(){
 int noOflines=5;
 int noOfblanks=10;
 int counter;
 for (counter  = 1; counter<noOflines; counter++)
 {
  printstars( noOfblanks, counter);
  noOfblanks--;
 }
   return 0;
}
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