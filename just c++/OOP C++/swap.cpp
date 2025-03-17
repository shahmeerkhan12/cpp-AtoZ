#include<iostream>
using namespace std;
void swap(int *x, int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}
int main ()
{
    int a =12, b=23;
    cout<<"the value of a before swap:"<<a<<endl;
    cout<<"the value of b before swap:"<<b<<endl;
    swap(a ,b);
    cout<<"the swaped value of a = "<< a <<endl;
    cout<<"the swaped value of b = "<< b <<endl;
    return 0;
}