#include<iostream>
using namespace std;
class beta; //needed for frifunc declaration
class alpha
{
private:
int no1;
public:
alpha()
{ no1=3; } //no-arg constructor
friend int sum(alpha, beta); //friend function
};
class beta
{
private:
int no2;
public:
beta() {no2=7; } //no-arg constructor
friend int sum(alpha, beta); //friend function
};
int sum(alpha a, beta b) //function definition
{
return( a.no1 + b.no2);
}
int main()
{
alpha aa;
beta bb;
cout << sum(aa, bb) << endl; //call the function
return 0;
}
