#include<iostream>
using namespace std;
class rectangletype
{
    double length,width;
    double area;
    public:
      void getdata(){
        cout<< "enter length and width for the rectangle respectively:";
        cin>>length>>width;
      }
      rectangletype operator+( rectangletype obj)
      {
        rectangletype temprect;
        temprect.length=length+obj.length;
        temprect.width=width+obj.width;
        return temprect;
      }
      void display()
      { 
        area=length*width;
        cout<<"the total area of both the rectangle is: \n";
        cout<< area <<"\n";
      }
};
int main()
    {
        rectangletype my;
        rectangletype your;
        rectangletype final;
        my.getdata();  
        your.getdata();
        final = my + your;
        final.display();
    }