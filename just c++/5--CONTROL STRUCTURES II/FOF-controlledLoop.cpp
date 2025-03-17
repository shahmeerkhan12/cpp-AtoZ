#include<iostream>
using namespace std;
int amin(){
int sum = 0;
int num;
cin >> num;
while (cin)
{
sum = sum + num; //Add the number to sum
cin >> num; //Get the next number
}
cout << "Sum = " << sum << endl;
return 0;
}