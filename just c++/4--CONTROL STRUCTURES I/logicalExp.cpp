#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   cout<<setprecision(2)<<fixed;
   bool found =true;
   int age = 30;
   double hours = 45.030;
   // evaluating logical OR boolean expressions
   !(found);
   cout<<"\n\nfound after !(found) is "<<!(found)<<endl;
   (age<40) && (hours>60);
   cout<<"\n\n(age<40) && (hours>60) is "<<   (age<40) && (hours>60);
   !(age<40) && (hours>60);
   cout<<"\n\n!(age<40) && (hours>60) is "<<   !(age<40) && (hours>60);
   //complex logical expression
   age<=45 || age==30 && hours<50;
   cout<<"\n\nage<=45 || age==30 && hours<50 is "<< (age<=45 || age==30 && hours<50);
   return 0;

}
