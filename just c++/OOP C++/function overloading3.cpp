#include<iostream>
using namespace std;
class area
{
    public:
    float A; float pi=3.14;
    void areaofcircle(int r)
    {
        cout<<"area of circle = "<< (2*pi*r);
        cout<< endl;
    }
    void areaofrectangle(float l, float b)
    {
        cout<<"area of the triangle = "<<(l*b)<<endl;
    }
    void areaofsquare(float l )
    {
        cout<<"area of square = "<< (l*l) <<endl;
    }

};
int main()
{
    area Area;
    Area.areaofcircle(4);
    Area.areaofrectangle(3.0,3.0);
    Area.areaofsquare(4.0);
    
}