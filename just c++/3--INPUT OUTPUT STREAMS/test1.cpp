#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        int num1, num2;
        char symbol;
        cout << "enter the given values" << endl;
        cin >> num1;
        cin.ignore(100, '*');
        cin >> num2; 
        cin.get(symbol);
        cout << "the entered values are " << endl
             << "num1 = " << num1 << endl
             << "num2 = " << num2 << endl
             << "symbol = " <<symbol << endl;
}