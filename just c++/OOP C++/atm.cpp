#include<iostream>
using namespace std;
int withdraw(){
    int draw;
    cout<<"Enter the amount to be withdrawed: \n";
    cin>>draw;
    return draw;
}
int balance(){
    int total=1000;
    int dra;
    int remaning_balance;
    if(total<300)
    cout<<"insufficient Funds \n";
   //tyring to compare
    else if(dra>total)
    cout<<"insufficient funds /n";
    else if(dra>300 && dra<500)
    {
        remaning_balance=total-dra*(4/100);
        cout<<"the remaining balance is:  "<< remaning_balance;
    }
}
int main(){
    cout<<"you are welcome:"<<endl;
    withdraw();
    balance();

}