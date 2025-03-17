#include <iostream>
using namespace std;
void printstars(int noofblanks, int noofstarsinline)
{
    int count;
    for (count = 1; count <= noofblanks; count++)
    {
        cout << ' ';
    }
    for (count = 1; count <= noofstarsinline; count++)
    {
        cout << " *";
    }
    cout << endl;
}
int main()
{
    int nooflines = 10;
    int blanks = 10;
    int counter;
    for (counter = 1; counter <= nooflines; counter++)
    {
        printstars(blanks, counter);
        blanks--;
    }
    return 0;
}