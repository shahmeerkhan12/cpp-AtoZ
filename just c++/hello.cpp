#include<iostream>
#include<iomanip>
using namespace std;
int main(){
   cout<<showpoint<<fixed ;
   double num = 12.83432;
   double no = 12.1;
   double N = 12.0;
   cout<<setprecision(2)<<num<<" "<<no<<" "<<N<<endl;
}