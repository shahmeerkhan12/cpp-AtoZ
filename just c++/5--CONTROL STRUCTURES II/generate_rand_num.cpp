#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
   int num;
   bool ISguissed;
   int guess;
   srand(time(0));
   num = rand() % 100;
    ISguissed = false;
    while (!ISguissed)
    {
      cout<<"enter an integer that is equal to or greater than zero and less than hundred"<<endl;
      cin>>guess;
      cout<<endl;
      if(guess==num){
         cout<<"you guessed the correct number:"<<endl;
         ISguissed=true;}
         else if(guess>num)
         cout<<"you entered number greater than required:\n Guess again"<<endl;
         else 
         cout<<"your guess is lower than the number: \n Guess again"<<endl;
    }   
   return 0;
}