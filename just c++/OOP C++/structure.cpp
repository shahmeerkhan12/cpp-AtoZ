#include<iostream>
#include<stdio.h>
#include<iomanip>
class bottle
{ 
    private:
    int a=10, b=30, sum, sub;
    public:
    void add()
    {
        sum=a+b;
      std::cout<<"the sum of a+b is ="<<sum;
      
    }
    void diff()
    {  sub=a-b;
        std::cout<<"the difference of two numbers is ="<<sub;
        

    }
};
int main()
{
    bottle no1;
    no1.add();
    no1.diff();
}