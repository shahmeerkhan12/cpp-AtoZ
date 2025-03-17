#include<iostream>
using namespace std;
class area
{
    public:
     area(int r)
    {    

    cout << "The area of circle is = " << (3.14*r*r) << endl;
    }
      area(int l, int b)
    {
        cout << "The area of rectangle = " << (l*b) << endl;
    }
      area( int l, float b)
    {
        
        cout << "The area of the square is = " << (l*l) << endl;
    }
};
int main()
{
    area alpha(3), beta(2,4),gama(2,2);
}

