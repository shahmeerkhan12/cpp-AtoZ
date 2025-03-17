#include<iostream>
#include<cmath>
using namespace std;
int fun1(int,double);
int main()
{
 int value=fun1(3,3.0);
 cout<<value;
 return 0;
}
int fun1(int x,double y)
{
return pow(x,y);
}