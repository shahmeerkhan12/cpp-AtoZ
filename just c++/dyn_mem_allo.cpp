#include<iostream>
using namespace std;
int main(){
   double *val; // pointer declaration
   val = new double; // we stored the address of the dynamically allocated variable of type double
   *val=1234.0; // we want to store some value at the dynamically allocated memory address 
   cout<<*val; // we now display the content at the memory address at which pointer points to
   delete val; // free up space which was dynamically allocated.
   return 0;
}