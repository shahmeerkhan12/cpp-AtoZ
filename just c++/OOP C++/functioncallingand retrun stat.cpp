//*****************************//
/*author : Shahmirkhan
Program to compare three numbers and find the largest among these number
*/
#include<iostream>
using namespace std;
double largest(double x, double y)
{
    if(x>=y)
    
    return x;
    else 

    return y;
}
double compare3(double x, double y, double z) //look at the definition
{
    return largest(x, largest(y,z));  //the return statement:
    
}

int main()
{
    double one = 10, two = 12;
    double maxno;
    cout << "The largest number between one and two is: " << largest(one,two) <<endl;
    cout << "The largest number between one and 4 is: " << largest(one,4)<<endl;
    cout << "The largest number between 100.0 and 99.99 is:" << largest(100.0,99.99)
    << endl;
         maxno = largest(23,23.10);
           cout << "The largest number is:" << maxno << endl;
cout << "Line 7: The largest of 43.48, 34.00, "
<< "and 12.65 is "
<< compare3(43.48, 34.00, 12.65) //remember this:
<< endl; //Line 7
return 0;
}
