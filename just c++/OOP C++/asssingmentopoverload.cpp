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
    }
    bool operator==(assin obj)
    {
        if(feet==obj.feet)
        return 1;
        else
        return 0;
    }
    void dispay()
    {
        cout<< "f = "<<feet<<endl;
    }
};
int main()
{
    assin a1(10),a2(30);
    if(a1==a2)
    cout<<" equal";
    else 
    cout<<"unequal";
}

 