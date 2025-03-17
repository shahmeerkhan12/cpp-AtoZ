#include<iostream>
using namespace std;
class assin
{
    int feet,inches;
    public:
    assin()
    {
        feet=0;
        inches=0;
    }
    assin(int f,int i)
    {
        feet=f;
        inches=i;
    }
    void dispay()
    {
        cout<< "f = "<<feet<<",     i = "<<inches<<endl;
    }
};
int main()
{
    assin a1(10,20),a2(30,40),a3(9,9);
    a1.dispay();
    a2.dispay();
    a3.dispay();
    a1=a3;
    a1.dispay();
}

 