#include <iostream>
#include <cctype>
using namespace std;
int main()
{
   int lista[5] = {1, 3, 4, 5, 6};
   int listb[5] = {1, 3, 4, 5, 6};
   bool Result;
   Result = std::equal(begin(lista), end(lista), begin(listb),end(listb));
   if (Result)
      cout << "the arrays are equal";
   else
      cout << "the arrays are not equal";
   return 0;
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

// comparing aRRays x and y
// int compareArrays(int x[], int y[], int sizex, int sizey)
// {

//    for (int i = 0; i < sizex; i++)
//    {
//       if (x[i] == y[i])
//       {
//          return 1;
//          break;
//       }
//    }
//    return 0;
// }