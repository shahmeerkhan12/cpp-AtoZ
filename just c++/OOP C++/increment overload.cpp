#include<iostream>
using namespace std;
class car
{
    int num;
    public:
    car(int x)
    {num=x;}
    int operator++(int)
    {
        return num++;
    }
    void disp1()
    {
        cout<<"\n the value after increment is : " <<num;
    }
     int operator--(int)
    {
        return num--;
    }
    void disp2()
    {
        cout<<"\n the value after decrement is : " <<num;
    }
};
int main()
{
    car m(5);
    car n(9);
    m++;
    n--;
    m.disp1();
    n.disp2();
}