#include<iostream>
using namespace std;
class two;
class one
{
    int n;
public:
    one()
    {
        n=5;
    }
     friend int mult(one,two);
};
class two
{
    int m;
public:
two()
{
    m=10;
}
    friend int mult(one,two);
};
int mult(one a,two b)
{
    return(a.n * b.m);
}
int main()
{
one o;
two t;
cout << mult(o,t)<<endl;
return 0;
}
