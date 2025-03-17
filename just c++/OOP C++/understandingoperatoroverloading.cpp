#include <iostream>
using namespace std;
class rectangletype
{
    double length, width;
    double area;

public:
    void getdata()
    {
        cout << "enter length and width for the rectangle respectively:";
        cin >> length >> width;
    }
rectangletype operator *(const rectangletype& obj)const
{
rectangletype temp;
temp.length=length*obj.length;
temp.width=width*obj.width;
return temp;
}
rectangletype operator /(const rectangletype& obj)const
{
rectangletype temp;
temp.length=length/obj.length;
temp.width=width/obj.width;
return temp;
}
    void display()
    {
        area = length * width;
        cout << "the area of rectangle is: \n";
        cout << area << "\n";
    }
};
int main()
{
    rectangletype no1;
    rectangletype no2;
    rectangletype no3,no4;
    no1.getdata();
    no1.display();

    no2.getdata();
    no3=no1*no2;
    no4=no1/no2;
    no3.display();
    no4.display();
}