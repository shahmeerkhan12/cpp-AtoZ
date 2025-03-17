#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
private:
public:
/*i am creating a constructor having no parameters within it*/
    sum()
    {cout<<"i am default constructor"<<endl;}
    ~sum()
    {cout<<"i am a default destructor";}
};
int main()
{
    /*As i created the object of the constructor it is called by default and same is the case with Destructor*/
    sum obj1;
}




