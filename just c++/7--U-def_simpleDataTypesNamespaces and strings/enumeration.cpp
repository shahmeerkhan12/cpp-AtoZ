#include<iostream>
#include<cctype>
using namespace std;
int main()
{
   enum sports {FOOTBALL, HOCKEY, BASKETBALL, CRICKET};
   sports mysport, famousSport, popularSport;
popularSport = FOOTBALL;
popularSport = static_cast<sports>(popularSport+2);
cout<<popularSport;
   return 0;
}