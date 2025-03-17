#include <iostream>
using namespace std;
class rectangletype
{
    double length, width;
    double area;

public:
    void getdata() //take inputs
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
    void display()     //shows output
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
    no1.getdata(); //taking input for object no1
    no2.getdata();//taking input for object no2
    no3=no1*no2; //object no2 will be passed as parameter to the op-fun
    no4=no1/no2; //object no2 will be passed as parameter to the op-fun
    cout<<"this result is due to overloading the of operator*  \n";
    no3.display();
    cout<<"this result is due to overloading the of operator/  \n";
    no4.display();
}