#include<iostream>
using namespace std;
/*int fact(int num){
if (num == 0)
return 1;
else
return num * fact(num - 1);
};
//Figure 15-1 traces the execution of the following statement:*/
int main(){
   int n=5;
   int factorial;
   factorial=n*(n-1);
   cout<<"factorial = "<<factorial;
/*cout << fact(0)<<endl;
cout << fact(2)<<endl;
cout << fact(3)<<endl;
cout << fact(4)<<endl;
cout << fact(5)<<endl;*/

}