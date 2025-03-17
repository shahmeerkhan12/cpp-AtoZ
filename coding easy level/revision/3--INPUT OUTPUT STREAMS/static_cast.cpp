#include <iostream>
using namespace std;
int main()
{
// SECTION #01
//integer and float conversion
   static_cast<int>(8.8);
   cout << "\n\nstatic_cast<int>(8.8) = " << static_cast<int>(8.8)<<"\n";
   static_cast<int>(8.5);
   cout << "static_cast<int>(8.5) = " << static_cast<int>(8.5)<<"\n";
   static_cast<float>(8);
   cout << "static_cast<float>(8) = " << static_cast<int>(8)<<"\n";
   static_cast<double>(3);
   cout << "static_cast<double>(3) = " << static_cast<double>(3)<<"\n";
   static_cast<int>(6 + (20) / 7);
   cout << "static_cast<int>(6+(20)/7) = " << static_cast<int>(6 + (20) / 7)<<"\n";

// SECTION #02
// integer and character conversion
static_cast<int>('A');
cout<<"\n\nstatic_cast<int>('A') ="<<static_cast<int>('A')<<"\n";
static_cast<int>('b');
cout<<"\nstatic_cast<int>('b') ="<<static_cast<int>('b');
static_cast<int>('2');
cout<<"\nstatic_cast<int>('2') ="<<static_cast<int>('2');

//integer into character
static_cast<char>(70);
cout<<"\nstatic_cast<char>(70) ="<<static_cast<char>(70);
//character into integer
static_cast<char>(90);
cout<<"\n\nstatic_cast<char>(90) ="<<static_cast<char>(90);
static_cast<char>(64);
cout<<"\n\nstatic_cast<char>(64) ="<<static_cast<char>(64);
}