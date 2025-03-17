#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
const string sentinal="-1";
int main()
{
   string name;
   int numofvolunteers,numofboxesSold,totalnoOfboxesSold;
   double costofsinglebox;
   cout<<showpoint<<fixed<<setprecision(2);
   cout<<"enter volunteers data ending with -1"<<endl;
   totalnoOfboxesSold=0;
   numofvolunteers=0;
   cin>>name;
   while (name!=sentinal)
   {
     cin>>numofboxesSold;
     totalnoOfboxesSold=totalnoOfboxesSold+numofboxesSold;
     numofvolunteers++;
     cin>>name;
   }
   cout<<endl;
   cout<<"the total number of boxes sold: "<<totalnoOfboxesSold<<endl;
   cout<<"enter the cost of a single box: "<<endl;
   cin>>costofsinglebox; 
   cout<<"the total money made by the total boxes: $"<<totalnoOfboxesSold*costofsinglebox<<endl;
   if (numofvolunteers!=0)
   {
      cout<<"the average number of boxes sold by each student: "<<totalnoOfboxesSold/numofvolunteers<<endl;
   }
   else
   cout<<"no input "<<endl;
   return 0;
}











