#include<iostream>
using namespace std;
class B{
    int val;
    public: B(){};
    B(int c){
        val=c;
    }
    //  by reference
    bool operator||(const B& b){
        B obj;
        obj.val=val||b.val;
        return this;
    }
    void display(){
        if(val>0)
        cout<<"true \n";
      else          
        cout<<"false \n";

    }
};
int main(){
    B b1(2),b2(2),b3;
    //calling the operator function
    // also storing the value in the object b3;
    b3=b1||b2;
    b3.display();
    return 0;
}