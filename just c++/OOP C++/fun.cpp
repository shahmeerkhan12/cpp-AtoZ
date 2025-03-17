#include<iostream>
using namespace std;
void farray (int list[], int listsize)
{int i;
    listsize=7;
    //to initialize array components to 0
    for (i = 0; i < listsize; i++)
    {
        list[i]=0;
    }//to take input
    for ( i = 0; i < listsize; i++)
    {
        cin>>list[i];
  }// to print array elements
    for ( i = 0; i < listsize; i++)
    {
        cout<< list[i] << " ";
    }
    // to find the sum of the array elements
    int sum = 0;
    for ( i = 0; i < listsize; i++)
    {
        sum= sum + list[i];
    }
    cout<<"the sum of the array components is = " << sum;
    

}

int main()
{ //calling function
cout<<"hello the function is called:";
  farray(int list[],int listsize);
    return 0;
}
