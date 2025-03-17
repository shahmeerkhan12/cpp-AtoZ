#include<iostream>
using namespace std;
class hello{
    public:
    hello()
    {
        cout<<"iam a default constructor"<< endl;
    }
    ~hello(){
        cout<<"iam a default destructor ";
    }
};
int main()
{
 hello Hello;   
}