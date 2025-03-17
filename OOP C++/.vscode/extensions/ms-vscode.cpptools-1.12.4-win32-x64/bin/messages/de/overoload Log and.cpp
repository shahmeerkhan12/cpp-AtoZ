#include<iostream>
using namespace std;
class A
{
    int value;
    public:
    A(){}
    A(int l){value=l;}
    // calling and returning by reference:
    /* Two possible difinitions of the operator function one is commented as:
                bool operator&&(const A& a){
                A obj;
                obj.value= value&&a.value;
                return this;   
      }  */
   
    //calling and returning by value:
    A operator&&(const A& a){
       A obj;
        obj.value= value&&a.value;
        return obj;   
    }
    void display(){
        if(value)
        cout<<"Both are non-zero\n";
        else cout<<"Both or may one of them is zero\n";
    }
};
int main(){
    A a1(19),a2(5),a3;
    //calling the overloaded operator as a1.&&(a2)
    // and then storing the value in object a3:
    a3=a1&&a2;
    a3.display();
    return 0;
}