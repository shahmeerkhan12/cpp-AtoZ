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
    bool operator==(assin obj)
    {
        feet==obj.feet;
        inches==obj.inches;
        return 1;
    }
    void dispay()
    {
        cout<< "f = "<<feet<<",     i = "<<inches<<endl;
    }
};
int main()
{
    assin a1(10,20),a2(30,40);
    if(a1==a2)
    cout<<"a1 and a2 are equal";
    else 
    cout<<"they are unequal";
}

 