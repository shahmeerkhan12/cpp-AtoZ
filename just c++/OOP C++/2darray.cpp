#include<iostream>
using namespace std;
int arrayfun(void);
int main(){
    int rowsno=2;
    int colno=2;
    int row=0;
    int col=0;
    int matrix[rowsno][colno];
    //loop for initializing each component of the matrix during run time:
    cout<<"Please enter values to arrange them in a matrix:";
    for (row = 0; row < rowsno; row++)
    {
        for (col = 0; col < colno; col++)
        {
            cin>>matrix[row][col];
        }
     
    }
    //loop for printing the whole 2D array:
       cout<<"Your input was arranged as: \n";
   for (row = 0; row < rowsno; row++)
   {
       for (col = 0; col < colno; col++)
       {
           cout<< matrix[row][col] << "   ";
       }
       cout<<endl;
   }
   
   int sum=0;
   for (row = 0; row< rowsno; row++)
   {
       for (col = 0; col<colno; col++)
       {
           sum= sum + matrix[row][col];
       }
   }
    cout<<"sum = "<<sum;  
 return 0;   
}