#include <iostream>
using namespace std;
class mine
{
    string s1, s2;

public:
    void getdata()
    {
        cout << "\nplease enter your name and address:  ";
        cin >> s1;
        cin >> s2;
    }
    void display()
    {
        cout << "\nyour name__ __" << s1 << "\n";
        cout << "\nyour address__ __ " << s2 << "\n";
        cout << "\nyour user name will be:__ __ " << s1 << "@1224";
    }
};

int main()
{
    mine string1;
    string1.getdata();
    string1.display();
}
