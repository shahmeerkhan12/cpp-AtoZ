#include<iostream>
using namespace std;
int secret(int x)
{
    if (x>5)
        return 2*x;   /* code */
}
int main()
{        
       cout<<"the value is doubled and is : " << secret(8)
       << endl;
       int y=10;
       int doubledvalue= secret(y);
       cout<<"the second value is : " << doubledvalue;

}