#include<iostream>
#include<cctype>
#include<string>
using namespace std;
bool comp(int x[],int y[], int size);
int main()
{
 int x[]={1,3,4,5,6};
 int y[]={1,3,4,5,6};
 comp(x,y,5);
 //built in function that can do the job of the following function
 // bool comp(int x[],int y[], int size)
   return 0;
}

bool comp(int x[],int y[], int size)
{
   int index =0;
   for (int i = 0; i < size; i++)
   {
      if(x[i]==y[i]){
      return true;
      break;}
   }
   return false;
}
// //function to initialize list elements to Zero
// void initializeArray(int list[], int listSize)
// {
//  int i =0;
//  for (int i = 0; i < listSize; i++)
//  {
//    list[i]=0;
//  }
// }//end function
// //function to assign values to list 
// void storeData(int list[], int listSize)
// {
//    cout<<"Please enter the scores:"<<endl;
//    for (int i = 0; i < listSize; i++)
// {
// cin>>list[i];
// }
// }//end fun
// //function to display list elements
// void printData(const int list[],int listSize)
// {
//    cout<<"The Array elements are: ";
//    for (int i = 0; i < listSize; i++)
//    {
//       cout<<list[i]<<" ";
//    }
// }
//comparing aRRays x and y
