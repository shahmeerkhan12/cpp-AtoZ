#include<iostream>
#include<conio.h>
using namespace std;
class sample
{
private:
int m , n , sum;
public:
sample (int m, int n)
{
    (sum=m+n);
    cout<<"sum of two numbers = "<< sum;
    cout<<endl;
}
};
int main()
{
    int x,y;
    cout<<"enter any two numbers to add:"<<endl;
    cin>>x>>y;
    sample obj1(int x , int y);
}


  


