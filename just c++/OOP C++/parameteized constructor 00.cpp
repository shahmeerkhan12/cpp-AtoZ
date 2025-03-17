#include<iostream>
using namespace std;
class walk{
    public:
    int x,y;
    walk(int m, int n){
        x=m;
        y=n;
    }
    double distancecovered(){
        return x*y;
    }
};
int main(){
    walk meter(10,10);
    walk meter1(10,20);
    cout<<"The distance covered is: " 
    << meter.distancecovered() << endl;
   
    cout<<"The distance covered in second interval is: " 
    << meter1.distancecovered();
}