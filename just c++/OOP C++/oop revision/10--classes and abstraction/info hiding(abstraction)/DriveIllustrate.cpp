#include<iostream>
#include "illustrateDefinition.h"
using namespace std;
int main(){
   //trying demonstrate the static functionality
   //of member variables and functions
   illustrate test1(223);
   test1.incrementY();
   test1.print();
   //making another object
   illustrate test2(333);
   test2.count+4;
   test2.incrementY();
   test2.print();
   //now consider the output for the firstobjec and 2nd obj
   
}
 
