#include<iostream>
using namespace std;
class car
{
    int num;
    public:
    car(int mynum)
    
        : num(mynum)
         {}
    bool operator<=(const car& c2)
    {
        return num<=c2.num;
    }
     bool operator>=(const car& c2)
    {
        return num>=c2.num;
    }
};
int main()
{
    car m{7};
    car n{8};
    if (m<=n)
    std::cout<<"n is greater than or equal to m.\n";
    if (m>=n)
    std::cout<<"m is greater than or equal to n. \n";   
}