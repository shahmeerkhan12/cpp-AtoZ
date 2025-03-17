#include<iostream>
using namespace std;
void tryMe(int x[],int size){

for (size_t i = 0; i < size; i++)
{
   cin>>x[i];
}

}
int main(){
   int list[100];
   int score[50];
   double gpas[50];

   tryMe(list,100);
   tryMe(list,50);
   tryMe(score,100);
   tryMe(score,49);
   // tryMe(gpas,50); type double, argument type does not match

}